#include "calculator.ih"

Value Calculator::rvalue(Value const &value) const
{
    return value.token() == IDENT ? d_symtab.at(value.intValue()).value()
                                  : value;
}
