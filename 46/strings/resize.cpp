#include "strings.ih"

void Strings::resize(size_t count)
{
    if (count > d_size)  // if count is bigger
        for (size_t idx = 0; idx < count; ++idx)
            add(string());  // initialize until we have count strings
    else  // if count is smaller
        for (size_t idx = d_size; idx-- > count;)
            d_str[idx].~string();  // reduce to first count elements

    d_size = count;  // update size
}