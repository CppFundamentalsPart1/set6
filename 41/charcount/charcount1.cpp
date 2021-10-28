#include "charcount.ih"

CharCount::CharCount()
:
    d_info(CharInfo{ rawCapacity(), 0 })  // initialize ptr with raw capacity
{                                         // of 8 Char's
}