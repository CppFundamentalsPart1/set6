#include "main.ih"

int nocasedec(string const *const *lhs, string const *const *rhs)
{
    return -strcasecmp((*lhs)->c_str(), (*rhs)->c_str());
}