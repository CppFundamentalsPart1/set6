#include "calculator.ih"

bool Calculator::add(Value &lhs)
{
    lhs = rvalue(lhs);           // get lhs value
    Value rhs = rvalue(term());  // get term's value

    if (equalize(lhs, rhs) == INT)  // determine the result type
        lhs.intValue(lhs.intValue() + rhs.intValue());  // add ints
    else                                                // or add doubles
        lhs.doubleValue(lhs.doubleValue() + rhs.doubleValue());

    return true;
}
