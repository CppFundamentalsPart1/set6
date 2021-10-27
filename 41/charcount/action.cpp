#include "charcount.ih"

void (CharCount::*CharCount::s_action[])(char ch, size_t idx) =
{
    &CharCount::append,
    &CharCount::insert,
    &CharCount::inc
};