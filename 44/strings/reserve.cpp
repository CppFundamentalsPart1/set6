#include "strings.ih"

void Strings::reserve(size_t newCap)
{
    if (newCap < d_size)  // if new capacity is less than size
        newCap = d_size;  // shrink to fit

    string **ptr = rawPointer(newCap);  // get new raw memory

    d_capacity = newCap;

    for (size_t idx = 0; idx < d_size; ++idx)
        ptr[idx] = d_str[idx];  // copy the pointers

    operator delete(d_str);  // delete old memory
    d_str = ptr;
}