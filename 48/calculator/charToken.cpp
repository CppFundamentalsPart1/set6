#include "calculator.ih"

bool Calculator::charToken(int ch)
{
    if (d_ok && d_tokenizer.token() == CHAR && d_tokenizer.charValue() == ch)
    {
        d_tokenizer.nextToken();
        return true;
    }

    return false;
}
