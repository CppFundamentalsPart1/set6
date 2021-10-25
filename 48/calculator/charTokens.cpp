#include "calculator.ih"

size_t Calculator::charTokens(std::string const &chars)
{
    if (size_t idx;
        d_ok && d_tokenizer.token() == CHAR &&
        (idx = chars.find(d_tokenizer.charValue())) != string::npos)
    {
        d_tokenizer.nextToken();
        return idx;
    }

    return chars.length();
}
