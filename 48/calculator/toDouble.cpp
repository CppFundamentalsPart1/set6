#include "calculator.ih"

void Calculator::toDouble(Value &rvalue)
{
    rvalue.doubleValue(rvalue.intValue());
}
