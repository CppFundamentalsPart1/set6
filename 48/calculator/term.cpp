#include "calculator.ih"

Value Calculator::term()
{
    Value ret = factor();  // the expr's term

    while ((this->*s_factor[charTokens("*/%")])(ret))  // add or sub terms
        ;

    return ret;
}
