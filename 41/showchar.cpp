#include "main.ih"

void showChar(unsigned char ch, size_t frequency)
{
    cout << "char ";

    switch (ch)
    {
        case '\t':
            cout << "'\\t'";
        break;
        case '\n':
            cout << "'\\n'";
        break;
        case ' ':
            cout << "' '";
        break;
        default:
            if (isprint(ch))  // check char is printable
                cout << '\'' << ch << '\'';
            else  // otherwise print number
                cout << static_cast<size_t>(ch);
        break;
    }

    cout << ": " << frequency << " times\n";
}