#include "strings.ih"

Strings::POD Strings::release()
{
    POD ret{ d_capacity, d_size, d_str };  // initialize the POD for the
                                           // caller

    d_capacity = 1;
    d_size = 0;  // reinitialize our data members
    d_str = rawPointer(d_capacity);

    return ret;
}