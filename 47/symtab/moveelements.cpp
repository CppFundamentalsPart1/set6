#include "symtab.ih"

void Symtab::moveElements(Symbol **dest, Symbol **start)
{
    for (Symbol **src = dest; dest > start; --dest)
        *dest = *--src;
}