#include "strings.ih"

Strings::Strings()
:
    d_str(rawPointer(d_capacity)) // initalize with raw memory
{
}