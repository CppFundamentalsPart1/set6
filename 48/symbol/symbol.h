#ifndef _SYMBOL_H_
#define _SYMBOL_H_

#include "../value/value.h"
#include <string>

class Symbol
{
    std::string d_ident;
    Value d_value;

    public:
        enum Order
        {
            LHS_FIRST,
            EQUAL,
            RHS_FIRST
        };

        Symbol(std::string const &ident, double value);
        Symbol(std::string const &ident, int value);

        std::string const &ident() const;

        double doubleValue() const;
        int intValue() const;
        char charValue() const;
        Token token() const;

        Value const &value() const;

        Order compare(std::string const &arg) const;

        void assign(Value const &value);

};

//#include "ident.f" commented out for mail handler
//#include "doublevalue.f"
//#include "intvalue.f"
//#include "charvalue.f"
//#include "token.f"
//#include "value.f"
//#include "assign.f"

#endif  // _SYMBOL_H_