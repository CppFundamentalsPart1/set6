#include "charcount.ih"

void CharCount::append(char ch, size_t)
{
    insert(ch, d_info.nCharObj);  // appending is equivalent to inserting at
                                  // the end
}