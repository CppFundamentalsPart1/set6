#ifndef _SYMTAB_H_
#define _SYMTAB_H_

#include "../symbol/symbol.h"

class Symtab
{
    size_t d_size = 0;
    size_t d_capacity = 8;

    Symbol **d_symbols;

    public:
        Symtab();   // symtab1.cpp
        ~Symtab();  // symtab2.cpp

        Symbol &find(std::string const &ident);
        size_t findIdx(std::string const &ident);

        size_t size() const;

        Symbol &at(size_t idx);
        Symbol const &at(size_t idx) const;

    private:
        size_t binSearch(std::string const &ident) const;

        void enlarge();

        // move elements [start, dest) one to the right
        static void moveElements(Symbol **dest, Symbol **start);
};

inline Symbol &Symtab::find(std::string const &ident)
{
    return *d_symbols[findIdx(ident)];
}

inline size_t Symtab::size() const
{
    return d_size;
}

inline Symbol &Symtab::at(size_t idx)
{
    return *d_symbols[idx];
}

inline Symbol const &Symtab::at(size_t idx) const
{
    return *d_symbols[idx];
}

#endif  // _SYMTAB_H_