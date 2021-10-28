#include "charcount.ih"

void CharCount::insert(char ch, size_t destIdx)
{
    if (d_info.nCharObj == d_capacity)
        enlarge();

    moveElements(destIdx);  // move all elements before the new element one to
                            // the right
    new(&d_info.ptr[destIdx]) Char{ ch, 1 };
    //d_info.ptr[destIdx] = Char{ ch, 1 };  // insert the new element

    ++d_info.nCharObj;  // increase the number of Char objects in the array
}