#include "calculator.ih"

bool Calculator::sub(Value &lhs)
{
    lhs = rvalue(lhs);           // get lhs value
    Value rhs = rvalue(term());  // get term's value

    if (equalize(lhs, rhs) == INT)  // determine the result type
        lhs.intValue(lhs.intValue() - rhs.intValue());  // subtract ints
    else                                                // or subtract doubles
        lhs.doubleValue(lhs.doubleValue() - rhs.doubleValue());

    return true;
}
