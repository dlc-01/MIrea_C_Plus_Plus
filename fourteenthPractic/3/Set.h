#ifndef INDUSTRIAL_PROGRAMMENT_PRACTIC_SET_H
#define INDUSTRIAL_PROGRAMMENT_PRACTIC_SET_H
#include <set>
#include <stdexcept>

class Set {
private:
    std::set<int> data;

public:
    void addElement(int value) {
        data.insert(value);
    }

    bool containsElement(int value) const {
        if (data.empty())
            throw std::out_of_range("Empty set exception");

        return data.count(value) > 0;
    }
};


#endif //INDUSTRIAL_PROGRAMMENT_PRACTIC_SET_H
