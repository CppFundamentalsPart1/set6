#include "charcount.ih"

void CharCount::processChar(char ch)
{
    size_t idx;

    // use array of member pointers to choose the action to perform
    (this->*s_action[locate(&idx, ch)])(ch, idx);
}
