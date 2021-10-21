#include "value.ih"

Value::Value(double value)
:
    d_token(DOUBLE),
    u_double(value)
{
}