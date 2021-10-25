#include "calculator.ih"

bool Calculator::mul(Value &lhs)
{
    lhs = rvalue(lhs);
    Value rhs = rvalue(factor());

    if (equalize(lhs, rhs) == INT)
        lhs.intValue(lhs.intValue() * rhs.intValue());
    else
        lhs.doubleValue(lhs.doubleValue() * rhs.doubleValue());

    return true;
}
