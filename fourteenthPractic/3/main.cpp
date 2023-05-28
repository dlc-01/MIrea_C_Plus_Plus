#include <iostream>
#include "Set.h"

int main() {
    Set set;

    try {
        set.addElement(10);
        set.addElement(20);

        int searchValue;
        std::cout << "Enter value to search: ";
        std::cin >> searchValue;

        if (set.containsElement(searchValue))
            std::cout << "Value " << searchValue << " found in the set." << std::endl;
        else
            std::cout << "Value " << searchValue << " not found in the set." << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}