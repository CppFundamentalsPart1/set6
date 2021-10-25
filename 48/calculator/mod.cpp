#include "calculator.ih"

bool Calculator::mod(Value &lhs)
{
    lhs = rvalue(lhs);
    Value rhs = rvalue(factor());

    bool zeroRhs = false;

    if (equalize(lhs, rhs) == INT)
    {
        if (!(zeroRhs = rhs.intValue() == 0))
            lhs.intValue(lhs.intValue() % rhs.intValue());
    }
    else if (!(zeroRhs = abs(rhs.doubleValue()) < s_zeroDouble))
        lhs.doubleValue(fmod(lhs.doubleValue(), rhs.doubleValue()));

    return divisionOK(zeroRhs);
}
