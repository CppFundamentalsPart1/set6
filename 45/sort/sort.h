#ifndef _SORT_H_
#define _SORT_H_

#include <iosfwd>

class Sort
{
    int (*d_compare)(std::string const *const *lhs,
                     std::string const *const *rhs);

public:
    Sort(int (*compare)(std::string const *const *lhs,
                        std::string const *const *rhs));

    void sort(std::string const **data, size_t size);

private:
    static int compare(void const *lhs, void const *rhs, void *sortObj);
};

#endif  // _SORT_H_