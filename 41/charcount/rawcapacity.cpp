#include "charcount.ih"

CharCount::Char *CharCount::rawCapacity() const
{
    return static_cast<Char *>(operator new(d_capacity * sizeof(Char)));
}