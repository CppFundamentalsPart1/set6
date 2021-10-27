#include "charcount.ih"

void CharCount::moveElements(size_t start)
{
    for (Char *rdest = d_info.ptr + d_info.nCharObj,
              *rsrc = rdest,
              *rend = d_info.ptr + start;
         rsrc-- != rend;
         --rdest)
        *rdest = *rsrc;
}