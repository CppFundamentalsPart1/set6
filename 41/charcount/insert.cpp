#include "charcount.ih"

void CharCount::insert(char ch, size_t destIdx)
{
    if (d_info.nCharObj == d_capacity)  // if number of Char's reaches
        enlarge();                      // capacity double the capacity

    moveElements(destIdx);  // move all elements before the new element one to
                            // the right

    new (&d_info.ptr[destIdx]) Char{ ch, 1 };  // initialize the new element

    ++d_info.nCharObj;  // increase the number of Char objects in the array
}