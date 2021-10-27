#include "charcount.ih"

void CharCount::inc(char, size_t idx)
{
    ++d_info.ptr[idx].count;
}