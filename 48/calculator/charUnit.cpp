#include "calculator.ih"

Value Calculator::charUnit()
{
    char ch = d_tokenizer.charValue();
    nextToken();

    switch (ch)
    {
        case '(':
        return parenthesized();
        case '+':
        return rvalue(factor());
        case '-':
        return unaryMinus();
        default:
            d_ok = false;
        return Value();
        break;
    }
}
