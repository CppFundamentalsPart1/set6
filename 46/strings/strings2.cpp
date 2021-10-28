#include "strings.ih"

Strings::Strings(int argc, char *argv[])
:
    d_capacity(argc),
    d_size(argc),
    d_str(rawPointer(d_capacity))
{
    fill(argv);
}
