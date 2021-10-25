#include "calculator.ih"

Value Calculator::ident()
{
    Value ret{ d_symtab.findIdx(d_tokenizer.ident()), IDENT };
    nextToken();

    return ret;
}
