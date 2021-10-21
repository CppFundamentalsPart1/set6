#include "symtab.ih"

void Symtab::enlarge()
{
    Symbol **buff = new Symbol *[d_capacity *= 2];

    memcpy(buff, d_symbols, d_size * sizeof(Symbol *));

    delete[] d_symbols;

    d_symbols = buff;
}