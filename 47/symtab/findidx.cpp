#include "symtab.ih"

size_t Symtab::findIdx(string const &ident)
{
    size_t pos = binSearch(ident);  // get index ident should be

    // if valid index and ident equals it exists so return pos
    if (pos != d_size && d_symbols[pos]->ident() == ident)
        return pos;

    // else we add it to the list
    if (d_size == d_capacity)
        enlarge();

    // move elements from pos to end one to the right
    moveElements(d_symbols + d_size, d_symbols + pos);

    d_symbols[pos] = new Symbol(ident, 0);  // insert new element

    ++d_size;

    return pos;
}