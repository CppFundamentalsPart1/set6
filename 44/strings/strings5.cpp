#include "strings.ih"

Strings::~Strings()
{
    destroy();

    operator delete(d_str);
}
