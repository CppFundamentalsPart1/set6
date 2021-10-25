#include "calculator.ih"

Value Calculator::evaluate()
{
    Value lhs = expr();  // get an expression

    while (charToken('='))
        assign(lhs, evaluate());  // if = then evaluate the rhs

    return lhs;
}
