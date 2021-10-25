#include "calculator.ih"

void Calculator::prompt()
{
    cout << "? ";
    d_ok = true;
    d_tokenizer.nextToken();
}
