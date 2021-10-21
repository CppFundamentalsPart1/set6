#include "value.ih"

void Value::intValue(int value)
{
    u_int = value;
    d_token = INT;
}