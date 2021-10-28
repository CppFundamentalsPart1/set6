#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity)
        reserve(d_capacity *= 2);

    d_str[d_size] = new string(next);                 // store next

    ++d_size;
}
