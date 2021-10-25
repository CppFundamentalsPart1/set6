#include "calculator.ih"

Value Calculator::notOK()
{
    d_ok = false;
    return Value{};
}
