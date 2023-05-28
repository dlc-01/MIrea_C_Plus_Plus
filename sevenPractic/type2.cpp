#include "type2.h"
#include "iostream"

type2::type2(double a1) {
    A = a1;
}

void type2::Get_answer() {
    std::cout << "The answer is. X = 0" << std::endl;
}

void type2::show() {
    std::cout << "Equation " << A <<" * X^2 = 0" << std::endl;
}
