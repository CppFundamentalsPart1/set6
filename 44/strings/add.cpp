#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity)      // if capacity is reached
        reserve(d_capacity *= 2);  // reserve double the capacity

    d_str[d_size] = new string(next);  // store next

    ++d_size;  // increment number of strings stored
}
