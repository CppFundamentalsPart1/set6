#include "strings.ih"

void Strings::resize(size_t count)
{
    if (count > d_size)
        for (size_t idx = 0; idx < count; ++idx)
            add(string());
    else
        for (size_t idx = d_size; idx-- > count;)
            delete d_str[idx];

    d_size = count;
}