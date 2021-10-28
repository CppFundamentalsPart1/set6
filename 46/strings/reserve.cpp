#include "strings.ih"

#include <iostream>

void Strings::reserve(size_t newCap)
{
    if (newCap < d_size)
        newCap = d_size;

    string *ptr = rawPointer(newCap);

    d_capacity = newCap;

    for (size_t idx = 0; idx < d_size; ++idx)
        new (&ptr[idx]) string{d_str[idx]};  // copy the pointers

    destroy();
    d_str = ptr;
}