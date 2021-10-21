#include "symbol.ih"

Symbol::Order Symbol::compare(std::string const &arg) const
{
    int result = d_ident.compare(arg);

    if (result < 0)
        return LHS_FIRST;

    if (result > 0)
        return RHS_FIRST;

    return EQUAL;
}