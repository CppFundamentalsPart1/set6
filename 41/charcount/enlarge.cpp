#include "charcount.ih"

void CharCount::enlarge()
{
    d_capacity *= 2;  // double capacity

    Char *ptr = rawCapacity();  // get pointer to new memory

    for (size_t idx = 0; idx < d_info.nCharObj; ++idx)
        ptr[idx] = d_info.ptr[idx];  // copy the old data

    operator delete(d_info.ptr);  // delete the old ptr

    d_info.ptr = ptr;  // assign the new ptr to d_info.ptr
}