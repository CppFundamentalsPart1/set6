#include "charcount.ih"

CharCount::CharCount()
:
    d_info( CharInfo{ rawCapacity(), 0 } )
{
}