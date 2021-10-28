#ifndef _SORT_H_
#define _SORT_H_

#include <iosfwd>

class Sort
{
    int (*d_compare)(std::string const *const *lhs,
                     std::string const *const *rhs);

public:
    Sort(int (*compare)(std::string const *const *lhs,
                        std::string const *const *rhs));  // sort1.cpp

    void sort(std::string const **data, size_t size);  // sort2.cpp

private:
    static int compare(void const *lhs, void const *rhs, void *sortObj);
};

#endif  // _SORT_H_