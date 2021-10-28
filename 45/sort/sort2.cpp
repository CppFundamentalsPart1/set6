#include "sort.ih"

void Sort::sort(string const **data, size_t size)
{
    qsort_r(data, size, sizeof(string const *), compare, this);
}