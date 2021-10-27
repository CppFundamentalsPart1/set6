#include "charcount.ih"

size_t CharCount::count(istream &in)
{
    size_t numChars = 0;  // total number of characters found

    char ch;

    while (in.get(ch))  // read next character from in
    {
        ++numChars;       // increment total number of characters found
        processChar(ch);  // process the found character
    }

    return numChars;
}