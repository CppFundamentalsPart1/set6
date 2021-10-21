#include "value.ih"

void Value::requireSpecial(Token token)
{
    switch (token)
    {
        case QUIT:
        case ERROR:
        case IDENT:
            d_token = token;
        break;
        default:
            cerr << "internal error: forcing token " << token
                 << " to value QUIT\n";
            d_token = QUIT;
        break;
    }
}