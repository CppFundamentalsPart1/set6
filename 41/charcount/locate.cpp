#include "charcount.ih"

CharCount::Action CharCount::locate(size_t *destIdx, unsigned char ch)
{
    // go over each Char object in d_info
    for (size_t idx = 0; idx < d_info.nCharObj; ++idx)
    {
        // get unsigned value of the char
        size_t chVal = static_cast<unsigned char>(d_info.ptr[idx].ch);

        // if ch is bigger we have not yet passed the position it should be at
        if (ch > chVal)
            continue;

        // we found the index it should be at so store it
        *destIdx = idx;

        // if values equal it exists and we increment it, else we insert it
        return ch == chVal ? INC : INSERT;
    }

    // ch was not found so we need to append it
    return APPEND;
}