#include "value.ih"

void Value::charValue(char value)
{
    u_char = value;
    d_token = CHAR;
}