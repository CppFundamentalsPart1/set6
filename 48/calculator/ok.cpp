#include "calculator.ih"

bool Calculator::ok()
{
    return d_ok = d_ok && d_tokenizer.token() == CHAR &&
                  d_tokenizer.charValue() == '\n';
}
