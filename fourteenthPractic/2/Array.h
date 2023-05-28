#ifndef INDUSTRIAL_PROGRAMMENT_PRACTIC_ARRAY_H
#define INDUSTRIAL_PROGRAMMENT_PRACTIC_ARRAY_H
#include <vector>
#include <stdexcept>

class Array {
private:
    std::vector<int> data;

public:
    Array(const std::vector<int>& values) : data(values) {}

    int getElementAt(int index) const {
        if (index < 0 || index >= data.size())
            throw std::out_of_range("Unsupported index");

        return data[index];
    }
};

#endif //INDUSTRIAL_PROGRAMMENT_PRACTIC_ARRAY_H
