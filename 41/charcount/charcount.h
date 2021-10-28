#ifndef _CHAR_COUNT_H_
#define _CHAR_COUNT_H_

#include <iosfwd>

struct CharCount
{
    struct Char
    {
        char ch;
        size_t count;
    };

    struct CharInfo
    {
        Char *ptr;
        size_t nCharObj;
    };

    private:
        size_t d_capacity = 8;
        CharInfo d_info;

        enum Action
        {
            APPEND,
            INSERT,
            INC
        };

        static void (CharCount::*s_action[])(char ch, size_t idx);

    public:
        CharCount();  // charcount1.cpp
        ~CharCount();  // charcount2.cpp
        // count number of characters read from in, return total number of
        // characters found
        size_t count(std::istream &in);

        // return const reference to d_info
        CharInfo const &info() const;

        size_t capacity() const;

    private:
        // get action to do with ch (using locate) and perform the action
        void processChar(char ch);

        // get the action to do with ch, if insert or inc then destIdx is the
        // index of where to insert or increment respectively
        Action locate(size_t *destIdx, unsigned char ch);

        // append ch to d_info.ptr
        void append(char ch, size_t);
        // insert ch into d_info.ptr at idx
        void insert(char ch, size_t idx);
        // increment the character in d_info.ptr at idx
        void inc(char, size_t idx);

        // move the elements from d_ptr starting at start one to the right
        void moveElements(size_t start);

        // double the capacity
        void enlarge();

        // return a pointer to raw memory able to hold d_capacity Char's
        Char *rawCapacity() const;

};

#endif