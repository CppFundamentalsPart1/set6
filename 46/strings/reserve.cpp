#include "strings.ih"

void Strings::reserve(size_t newCap)
{
    if (newCap < d_size)  // if new capacity is less than size
        newCap = d_size;  // shrink to fit

    string *ptr = rawPointer(newCap);  // get new raw memory

    d_capacity = newCap;

    for (size_t idx = 0; idx < d_size; ++idx)
        new (&ptr[idx]) string{ d_str[idx] };  // initialize with old memory

    destroy();  // delete old memory
    d_str = ptr;
}