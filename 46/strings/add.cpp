#include "strings.ih"
#include <iostream>
#include <iomanip>

void Strings::add(string const &next)
{
    //cout << "adding string: " << setw(70) << next << "    size before: " << setw(4) << d_size << "    capacity before: " << setw(4) << d_capacity << '\n';
    if (d_size == d_capacity)
        reserve(d_capacity *= 2);

    new (&d_str[d_size]) string(next);  // store next

    ++d_size;
    //cout << setw(89) << " size after: " << setw(4) << d_size << "     capacity after: " << setw(4) << d_capacity << '\n';
}
