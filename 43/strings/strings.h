#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_size = 0;
    std::string *d_str = 0;

    public:
        struct POD
        {
            size_t size;
            std::string *str;
        };

        Strings() = default;
        Strings(int argc, char *argv[]);  // strings1.cpp
        Strings(char *environLike[]);     // strings2.cpp
        Strings(std::istream &in);        // strings3.cpp
        ~Strings();                       // strings4.cpp

        void swap(Strings &other);

        size_t size() const;
        std::string const *data() const;
        POD release();

        std::string const &at(size_t idx) const;
        std::string &at(size_t idx);

        void add(std::string const &next);          // add another element

    private:
        void fill(char *ntbs[]);                    // fill prepared d_str

        std::string &safeAt(size_t idx) const;      // private backdoor
        std::string *enlarge();

        static size_t count(char *environLike[]);   // # elements in env.like

        void destroy();
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline std::string const *Strings::data() const
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

