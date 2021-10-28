#include "main.ih"

int increasing(string const *const *lhs, string const *const *rhs)
{
    return (*lhs)->compare(**rhs);
}