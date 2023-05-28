#include <iostream>
#include <cmath>
using namespace std;

class type5 {
private:
    double B, C;
public:
    type5 (double b1, double c1) {
        B = b1;
        C = c1;
    }
    void Get_answer () {
        cout << "The root of the equation: " << (-1)*(C/B) << endl;
    }
    void show () {
        cout << "Equation " << B << "*x + " << C << " = 0"<< endl;
    }
};

class type6 {
private:
    double A, B, C;
public:
    type6 (double a1, double b1, double c1) {
        A = a1;
        B = b1;
        C = c1;
    }
    void Get_answer () {
        double D = B*B - 4*A*C;
        if (D<0) {
            cout << "The equation has no valid roots" << endl;
        }
        else {
            if (D == 0) {
                double x = ((-1)*B-sqrt(D))/(2*A);
                cout << "The root of the equation: " << x << endl;
            }
            else {
                double x1 = ((-1)*B-sqrt(D))/(2*A);
                double x2 = ((-1)*B+sqrt(D))/(2*A);
                cout << "Roots of the equation: " << endl;
                cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
            }
        }
    }
    void show () {
        cout << "Equation " << A << "*x^2 + " << B << "*x + " << C << " = 0"<< endl;
    }
};

int main() {
    type5 eq1(3, 6);
    eq1.show();
    eq1.Get_answer();

    type6 eq2(5, -6, 2);
    eq2.show();
    eq2.Get_answer();

    type6 eq3(3, -14, 16);
    eq3.show();
    eq3.Get_answer();

    return 0;
}
