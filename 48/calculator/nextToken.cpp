#include "calculator.ih"

void Calculator::nextToken()
{
    if (d_ok)
        d_tokenizer.nextToken();
    else
        d_tokenizer.error();
}
