#include "charcount.ih"

void CharCount::processChar(char ch)
{
    size_t idx;
    (this->*s_action[locate(&idx, ch)])(ch, idx);
}
