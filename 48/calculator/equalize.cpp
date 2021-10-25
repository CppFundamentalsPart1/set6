#include "calculator.ih"

Token Calculator::equalize(Value &lhs, Value &rhs)
{
    if (lhs.token() == INT)
    {
        if (rhs.token() == INT)
            return INT;

        toDouble(lhs);
    }
    else if (rhs.token() == INT)
        toDouble(rhs);

    return DOUBLE;
}
