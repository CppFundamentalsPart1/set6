#ifndef INCLUDED_VALUE_H_
#define INCLUDED_VALUE_H_

#include "../enum/enum.h"

#include <cstddef>

class Value
{
    Token d_token;

    union
    {
        double u_double;
        int u_int;
        char u_char;
    };

    public:
        Value(int value = 0);
        Value(double value);
        Value(size_t idx, Token);

        double doubleValue() const;
        int intValue() const;
        char charValue() const;

        Token token() const;

        void doubleValue(double value);
        void intValue(int value);
        void charValue(char value);

        void requireSpecial(Token token);
};

// #include "doublevalue.f" commented out for mail handler
// #include "intvalue.f"
// #include "charvalue.f"
// #include "token.f"

#endif  // INCLUDED_VALUE_H_