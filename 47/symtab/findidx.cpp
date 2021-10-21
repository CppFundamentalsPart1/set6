#include "symtab.ih"

size_t Symtab::findIdx(string const &ident)
{
    size_t pos = binSearch(ident);

    if (pos != d_size && d_symbols[pos]->ident() == ident)
        return pos;

    if (d_size == d_capacity)
        enlarge();

    moveElements(d_symbols + d_size, d_symbols + pos);

    d_symbols[pos] = new Symbol(ident, 0);

    ++d_size;

    return pos;
}