#include "main.ih"

int main()
{
    CharCount cc;

    cc.count(cin);  // count and process the characters from cin

    CharCount::CharInfo const &info = cc.info();  // get the info

    // go over each Char entry and print it and its frequency
    for (size_t idx = 0; idx != info.nCharObj; ++idx)
        showChar(info.ptr[idx].ch, info.ptr[idx].count);

    cout << "\nCapacity: " << cc.capacity() << ", size: " << info.nCharObj
         << '\n';
}