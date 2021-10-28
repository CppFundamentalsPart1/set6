#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_capacity = 1;
    size_t d_size = 0;
    std::string **d_str = 0;

    public:
        struct POD
        {
            size_t capacity;
            size_t size;
            std::string **str;
        };

        Strings();                        // strings1.cpp
        Strings(int argc, char *argv[]);  // strings2.cpp
        Strings(char *environLike[]);     // strings3.cpp
        Strings(std::istream &in);        // strings4.cpp
        ~Strings();                       // strings5.cpp

        void swap(Strings &other);

        size_t size() const;
        std::string const *const *data() const;
        POD release();

        std::string const &at(size_t idx) const;
        std::string &at(size_t idx);

        void add(std::string const &next);          // add another element

        void reserve(size_t newCap);
        size_t capacity() const;
        void resize(size_t count);


    private:
        void fill(char *ntbs[]);                    // fill prepared d_str

        std::string &safeAt(size_t idx) const;      // private backdoor

        static size_t count(char *environLike[]);   // # elements in env.like

        void destroy();

        std::string **rawPointer(size_t size);
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline std::string const *const *Strings::data() const
{
    return d_str;
}

inline std::string const &Strings::at(size_t idx) const
{
    return safeAt(idx);
}

inline std::string &Strings::at(size_t idx)
{
    return safeAt(idx);
}


#endif

