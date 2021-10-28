#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity)      // if capacity is reached
        reserve(d_capacity *= 2);  // reserve double the capacity

    new (&d_str[d_size]) string(next);  // initialize next

    ++d_size;  // increment number of strings stored
}
