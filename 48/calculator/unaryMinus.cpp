#include "calculator.ih"

Value Calculator::unaryMinus()
{
    Value ret = rvalue(factor());

    if (ret.token() == INT)
        ret.intValue(-ret.intValue());
    else
        ret.doubleValue(-ret.doubleValue());

    return ret;
}
