#include "symtab.ih"

size_t Symtab::binSearch(string const &ident) const
{
    size_t begin = 0;
    size_t end = d_size;

    while (begin != end)
    {
        size_t mid = (begin + end) / 2;

        switch (d_symbols[mid]->compare(ident))
        {
            case Symbol::LHS_FIRST:
                begin = mid + 1;
            break;
            case Symbol::RHS_FIRST:
                end = mid;
            break;
            case Symbol::EQUAL:
            return mid;
        }
    }

    return end;
}