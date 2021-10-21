#include "value.ih"

void Value::doubleValue(double value)
{
    u_double = value;
    d_token = DOUBLE;
}