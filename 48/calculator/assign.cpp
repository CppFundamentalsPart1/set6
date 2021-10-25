#include "calculator.ih"

void Calculator::assign(Value &lhs, Value const &rhs)
{
    if (lhs.token() != IDENT)
    {
        cout << "lhs of = must be a symbol\n";
        d_ok = false;
    }

    if (!d_ok)
        return;

    Symbol &symbol = d_symtab.at(lhs.intValue());

    symbol.assign(rvalue(rhs));
}
