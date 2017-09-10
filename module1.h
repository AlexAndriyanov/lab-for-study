#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef UNTITLED3_MODULE1_H
#define UNTITLED3_MODULE1_H

#include <list>

using  namespace std;

namespace Module1 {

    class SpecialMetod {
    public:
        template <typename T>
        static void sort_strings(list<T> example);
    };
}

#endif //UNTITLED3_MODULE1_H
