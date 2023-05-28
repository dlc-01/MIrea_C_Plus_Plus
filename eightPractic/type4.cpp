#include "type4.h"
#include "iostream"
#include "cmath"
using namespace std;

type4::type4(double a1, double c1) {
    A = a1;
    C = c1;
}

void type4::Get_answer() {
    double  k = ((-1)*C)/A;
    if (k > 0) {
        double x1 = sqrt(k);
        double x2 = sqrt(k) * (-1);
        cout << "Roots of the equation: " << endl << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
    }
    else {
        cout << "There are no roots." << endl;
    }
}

void type4::show() {
    cout << "Equation " << A <<"*x^2+ " << C << " = 0" << endl;
}
