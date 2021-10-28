#include "strings.ih"

void Strings::destroy()
{
    for (; d_size--; )
        delete d_str[d_size];
}
