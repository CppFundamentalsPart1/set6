#include "calculator.ih"

bool (Calculator::*Calculator::s_term[])(Value &ret) =
{
    &Calculator::add,
    &Calculator::sub,
    &Calculator::done
};

bool (Calculator::*Calculator::s_factor[])(Value &ret) =
{
    &Calculator::mul,
    &Calculator::div,
    &Calculator::mod,
    &Calculator::done
};

Value (Calculator::*Calculator::s_unit[])() =
{
    &Calculator::notOK,      // QUIT
    &Calculator::charUnit,   // CHAR
    &Calculator::intDouble,  // INT
    &Calculator::intDouble,  // DOUBLE
    &Calculator::ident,      // IDENT
    &Calculator::notOK       // ERROR
};