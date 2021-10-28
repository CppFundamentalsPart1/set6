#include "strings.ih"

Strings::Strings(istream &in)
:
    d_str(rawPointer(d_capacity))
{
    string line;
    while (getline(in, line))
        add(line);
}
