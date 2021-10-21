#include "value.ih"

Value::Value(size_t idx, Token)
:
    d_token(IDENT),
    u_int(idx)
{
}