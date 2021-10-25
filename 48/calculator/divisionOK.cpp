#include "calculator.ih"

bool Calculator::divisionOK(bool zeroRhs)
{
    if (!zeroRhs)
        return true;  // no division by zero

    cout << "division by zero\n";  // division by zero: issue a msg.
    d_ok = false;                  // and set an expression error

    return false;
}
