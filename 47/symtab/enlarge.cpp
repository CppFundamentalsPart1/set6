#include "symtab.ih"

void Symtab::enlarge()
{
    Symbol **buff = new Symbol *[d_capacity *= 2]; // allocate new memory

    memcpy(buff, d_symbols, d_size * sizeof(Symbol *));  // copy old memory

    delete[] d_symbols;  // delete old memory

    d_symbols = buff;
}