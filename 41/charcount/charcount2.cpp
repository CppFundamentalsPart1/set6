#include "charcount.ih"

CharCount::~CharCount()
{
    operator delete(d_info.ptr);
}