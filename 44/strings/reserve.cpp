#include "strings.ih"

void Strings::reserve(size_t newCap)
{
    if (newCap < d_size)
        newCap = d_size;

    string **ptr = rawPointer(newCap);

    d_capacity = newCap;

    for (size_t idx = 0; idx < d_size; ++idx)
        ptr[idx] = d_str[idx]; // copy the pointers

    operator delete(d_str);
    d_str = ptr;
}