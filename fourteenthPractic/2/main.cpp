#include <iostream>
#include "Array.h"

int main() {
    try {
        std::vector<int> values = {1, 2, 3, 4, 5};
        Array arr(values);

        int index;
        std::cout << "Enter index: ";
        std::cin >> index;

        int element = arr.getElementAt(index);
        std::cout << "Element at index " << index << ": " << element << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}