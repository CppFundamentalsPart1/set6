#include "sort.ih"

Sort::Sort(int (*compare)(string const *const *lhs, string const *const *rhs))
  : d_compare(compare)
{
}