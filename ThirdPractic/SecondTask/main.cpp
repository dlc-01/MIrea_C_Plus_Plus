#include "rational.h"
#include <iostream>

int main() {
    int n;
    std::cout << "Enter number of fractions: ";
    std::cin >> n;
    rational *fractions = new rational[n];
    for (int i = 0; i < n; ++i) {
        int a, b;
        std::cout << "Enter numerator and denominator for fraction " << i+1 << ": ";
        std::cin >> a >> b;
        fractions[i].set(a, b);
        std::cout << "Fraction " << i+1 << " = ";
        fractions[i].show();
    }
    delete[] fractions;
    return 0;
}
