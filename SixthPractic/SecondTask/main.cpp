#include "cone.h"
#include <iostream>

int main() {
    TruncatedCone cone1;
    cone1.output();
    std::cout << "Surface area: " << cone1.surfaceArea() << std::endl;
    std::cout << "Volume: " << cone1.volume() << std::endl;

    TruncatedCone cone2(1, 2, 3, 0.5, 1.5, 4);
    cone2.output();
    std::cout << "Surface area: " << cone2.surfaceArea() << std::endl;
    std::cout << "Volume: " << cone2.volume() << std::endl;

    TruncatedCone cone3(2, 3, 4, 1, 2, 5);
    cone3.output();
    std::cout << "Surface area: " << cone3.surfaceArea() << std::endl;
    std::cout << "Volume: " << cone3.volume() << std::endl;

    if (cone1 == cone2) {
        std::cout << "cone1 and cone2 are equal." << std::endl;
    } else {
        std::cout << "cone1 and cone2 are not equal." << std::endl;
    }

    if (cone2 != cone3) {
        std::cout << "cone2 and cone3 are not equal." << std::endl;
    } else {
        std::cout << "cone2 and cone3 are equal." << std::endl;
    }
}