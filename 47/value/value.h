#ifndef _VALUE_H_
#define _VALUE_H_

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
        Value(int value = 0);      // value1.cpp
        Value(double value);       // value2.cpp
        Value(size_t idx, Token);  // value3.cpp

        double doubleValue() const;
        int intValue() const;
        char charValue() const;

        Token token() const;

        void doubleValue(double value);
        void intValue(int value);
        void charValue(char value);

        void requireSpecial(Token token);
};

#include "doublevalue.f"
#include "intvalue.f"
#include "charvalue.f"
#include "token.f"

#endif  // _VALUE_H_