#include "symtab.ih"

size_t Symtab::binSearch(string const &ident) const
{
    size_t begin = 0;
    size_t end = d_size;

    while (begin != end)
    {
        size_t mid = (begin + end) / 2;  // midpoint

        switch (d_symbols[mid]->compare(ident))
        {
            case Symbol::LHS_FIRST:
                begin = mid + 1;  // search right half
            break;
            case Symbol::RHS_FIRST:
                end = mid;  // seach left half
            break;
            case Symbol::EQUAL:
            return mid;  // element found
        }
    }

    return end;
}