#include "strings.ih"

string **Strings::rawPointer(size_t size)
{
    return static_cast<string **>(operator new(size * sizeof(string *)));
}