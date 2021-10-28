#include "calculator.ih"

bool Calculator::div(Value &lhs)
{
    lhs = rvalue(lhs);
    Value rhs = rvalue(factor());

    bool rhsZero = false;

    if (equalize(lhs, rhs) == INT)
    {
        if (!(rhsZero = rhs.intValue() == 0))
            lhs.intValue(lhs.intValue() / rhs.intValue());
    }
    else if (!(rhsZero = abs(rhs.doubleValue()) < s_zeroDouble))
        lhs.doubleValue(lhs.doubleValue() / rhs.doubleValue());

    return divisionOK(rhsZero);
}
