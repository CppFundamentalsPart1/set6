#include "main.ih"

int main(int argc, char *argv[])
{
    string *data[argc];

    for (size_t idx = 0, end = argc; idx < end; ++idx)
        data[idx] = new string{ argv[idx] };

    string const **cArray = const_cast<string const **>(data);

    Sort{ increasing }.sort(cArray, argc);  // sort array's elem.

    for (size_t idx = 0, end = argc; idx != end; ++idx)  // visit all elements
        cout << *data[idx] << '\n';  // show them (ordered)

    cout << "==============\n";

    Sort{ nocasedec }.sort(cArray, argc);  // sort decreasing

    for (size_t idx = 0, end = argc; idx != end; ++idx)  // visit all elements
        cout << *data[idx] << '\n';  // show them (ordered)
}