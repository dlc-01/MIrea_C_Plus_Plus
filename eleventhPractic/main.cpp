
#include <iostream>

using namespace std;

class type7 {
private:
    double B;
public:
    type7 (double b1) {
        B = b1;
    }
    void Get_answer () {
        cout << "The root of the equation: x = 0" << endl;
    }
    void show () {
        cout << "Equation " << B << "*x = 0" << endl;
    }
};

class type8 {
private:
    double A, B;
public:
    type8 (double a1, double b1) {
        A = a1;
        B = b1;
    }
    void Get_answer () {
        double x = ((-1)*B)/A;
        cout << "The roots of the equation: " << endl;
        cout << "X1 = 0" << endl << "X2 = " << x << endl;
    }
    void show () {
        cout << "Equation " << A << "*x^2 + " << B << "*x = 0 " << endl;
    }
};

int main() {
    type7 eq1(6);
    eq1.show();
    eq1.Get_answer();

    type8 eq2(5, -8);
    eq2.show();
    eq2.Get_answer();

    return 0;
}
