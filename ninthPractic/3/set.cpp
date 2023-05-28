#include "set.h"

template<typename Atype>
Set<Atype>::Set(int size) {
    len = size;
    a = new Atype[size];
    for (int i = 0; i < size; i++)
        a[i] = 0;
}

template<typename Atype>
Set<Atype>::~Set() {
    delete[] a;
}

template<typename Atype>
bool Set<Atype>::Is_Empty() {
    return (len == 0);
}

template<typename Atype>
bool Set<Atype>::Is_Full() {
    return (len > 0);
}

template<typename Atype>
bool Set<Atype>::Add(Atype T) {
    if (In_Set(T))
        return false;

    for (int i = 0; i < len; i++) {
        if (a[i] == 0) {
            a[i] = T;
            return true;
        }
    }
    return false;
}

template<typename Atype>
bool Set<Atype>::In_Set(Atype T) {
    for (int i = 0; i < len; i++) {
        if (a[i] == T)
            return true;
    }
    return false;
}

template<typename Atype>
Atype Set<Atype>::Get(Atype T) {
    for (int i = 0; i < len; i++) {
        if (a[i] == T) {
            Atype temp = a[i];
            a[i] = 0;
            return temp;
        }
    }
    return 0;
}
