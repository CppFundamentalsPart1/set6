#include "sort.ih"

int Sort::compare(void const *lhs, void const *rhs, void *sortObj)
{
    string const *const *left = reinterpret_cast<string const *const *>(lhs);
    string const *const *right = reinterpret_cast<string const *const *>(rhs);

    Sort &sort = *reinterpret_cast<Sort *>(sortObj);

    return (*sort.d_compare)(left, right);
}