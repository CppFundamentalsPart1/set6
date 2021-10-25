#include "calculator.ih"

Value Calculator::intDouble()
{
    Value ret = d_tokenizer.value();

    nextToken();

    return ret;
}
