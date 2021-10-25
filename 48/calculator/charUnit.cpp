#include "calculator.ih"

Value Calculator::charUnit()
{
    char ch = d_tokenizer.charValue();
    nextToken();

    Value ret;

    switch (ch)
    {
        case '(':
            ret = parenthesized();
            break;

        case '+':
            ret = rvalue(factor());
            break;

        case '-':
            ret = unaryMinus();
            break;

        default:
            d_ok = false;
            break;
    }

    return ret;
}
