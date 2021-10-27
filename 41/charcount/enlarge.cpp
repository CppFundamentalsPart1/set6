#include "charcount.ih"

void CharCount::enlarge()
{
    d_capacity *= 2;

    Char *ptr = rawCapacity();

    for (size_t idx = 0; idx < d_info.nCharObj; ++idx)
        ptr[idx] = d_info.ptr[idx];

    operator delete(d_info.ptr);

    d_info.ptr = ptr;
}