#include "calculator.ih"

Value Calculator::factor()
{
    return (this->*s_unit[d_tokenizer.token()])();
}
