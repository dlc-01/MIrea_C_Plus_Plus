#include <iostream>
#include <cmath>
using namespace std;

class type1 {
public:
    void Get_answer () {
        cout << "The answer is any value Х" << endl;
    }
    void show () {
        cout << "Equation 0 = 0" << endl;
    }
};

class type2 {
private:
    double A;
public:
    type2 (double a1) {
        A = a1;
    }
    void Get_answer () {
        cout << "The answer is Х = 0" << endl;
    }
    void show () {
        cout << "Equation " << A << "*x^2 = 0" << endl;
    }
};

class type3 {
private:
    double C;
public:
    type3 (double c1) {
        C = c1;
    }
    void Get_answer () {
        cout << "There are no roots" << endl;
    }
    void show () {
        cout << C << " = 0"<< endl;
    }
};

class type4 {
private:
    double A, C;
public:
    type4 (double a1, double c1) {
        A = a1;
        C = c1;
    }
    void Get_answer () {
        double k = ((-1) * C) / A;
        if (k>=0) {
            double x1 = sqrt(k);
            double x2 = sqrt(k )* (-1);
            cout << "Roots of the equation: " << endl << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
        }
        else {
            cout << "There are no roots" << endl;
        }
    }
    void show () {
        cout << "Equation " << A << "*x^2 + " << C << " = 0"<< endl;
    }
    void Get_answer_podbor() {
        if ((((-1) * C) / A) < 0) {
            cout << "There are no roots by method of selection" << endl;
        }
        else {
            double min = abs(0 - A * pow(-20,2) - C);
            double x = -20;
            for (double i = -20; i < 20.01; i = i + 0.01) {
                double temp = abs(0 - A* pow(i,2) - C);
                if (temp<min) {
                    min = temp;
                    x = i;
                }
            }
            cout << "Approximatively, one of the roots of the equation: " << x << endl;
        }
    }
};

class type5 {
private:
    double B, C;
public:
    type5 (double b1, double c1) {
        B = b1;
        C = c1;
    }
    void Get_answer () {
        cout << "The root of the equation: " << (-1) * (C / B) << endl;
    }
    void show () {
        cout << "Equation " << B << "*x + " << C << " = 0"<< endl;
    }
    void Get_answer_podbor() {
        double min = abs(0 - B * (-20) - C);
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            double temp = abs(0 - B * (i) - C);
            if (temp<min) {
                min = temp;
                x = i;
            }
        }
        cout << "Approximatively, one of the roots of the equation: " << x << endl;
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
                double x = ((-1) * B-sqrt(D)) / (2 * A);
                cout << "The root of the equation: " << x << endl;
            }
            else {
                double x1 = ((-1) * B - sqrt(D)) / (2 * A);
                double x2 = ((-1) * B + sqrt(D)) / (2 * A);
                cout << "Roots of the equation: " << endl;
                cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
            }
        }
    }
    void show () {
        cout << "Equation " << A << "*x^2 + " << B << "*x + " << C << " = 0"<< endl;
    }
    void Get_answer_podbor() {
        double D = B*B - 4*A*C;
        if (D<0) {
            cout << "The equation has no valid roots" << endl;
        }
        else {
            double min = abs(0 - A * pow(-20, 2) - B * (-20) - C);
            double x = -20;
            for (double i = -20; i< 20.01; i=i+0.01) {
                double temp = abs(0 - A * pow(i,2) - B * i - C);
                if (temp<min) {
                    min = temp;
                    x = i;
                }
            }
            cout << "Approximatively, one of the roots of the equation: " << x << endl;
        }
    }
};

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
        cout << "Roots of the equation: " << endl;
        cout << "X1 = 0" << endl << "X2 = " << x << endl;
    }
    void show () {
        cout << "Equation " << A << "*x^2 + " << B << "*x = 0 " << endl;
    }
    void Get_answer_podbor() {
        double min = abs(0 - A * pow(-20, 2) - B * (-20));
        double x = -20;
        for (double i = - 20; i < 20.01; i = i + 0.01) {
            if (i!=0) {
                double temp = abs(0 - A * pow(i, 2) - B * (i));
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
        }
        cout << "Approximatively, one of the roots of the equation: " << x << endl;
    }
};

int main()
{
    double A, B, C;
    cout << "Enter the coefficients of the 1st equation A, B, and C, separated by a space: " << endl;
    cin >> A >> B >> C;
    type1 eq1;
    cout << "Enter the coefficients of the 2nd equation A, B, and C with a space: " << endl;
    cin >> A >> B >> C;
    type2 eq2(B);
    cout << "Enter the coefficients of the 3rd equation A, B, and C with a space: " << endl;
    cin >> A >> B >> C;
    type3 eq3(C);
    cout << "Enter the coefficients of the 4th equation A, B, and C with a space: " << endl;
    cin >> A >> B >> C;
    type4 eq4(A,C);
    cout << "Enter the coefficients of the 5th equation A, B, and C with a space: " << endl;
    cin >> A >> B >> C;
    type5 eq5(B,C);
    cout << "Enter the coefficients of the 6th equation A, B, and C with a space: " << endl;
    cin >> A >> B >> C;
    type6 eq6(A,B,C);
    cout << "Enter the coefficients of the 7th equation A, B, and C with a space: " << endl;
    cin >> A >> B >> C;
    type7 eq7(B);
    cout << "Enter the coefficients of the 8th equation A, B, and C, separated by a space: " << endl;
    cin >> A >> B >> C;
    type8 eq8(A,B);
    eq1.show();
    eq1.Get_answer();
    eq2.show();
    eq2.Get_answer();
    eq3.show();
    eq3.Get_answer();
    eq4.show();
    eq4.Get_answer();
    eq4.Get_answer_podbor();
    eq5.show();
    eq5.Get_answer();
    eq5.Get_answer_podbor();
    eq6.show();
    eq6.Get_answer();
    eq6.Get_answer_podbor();
    eq7.show();
    eq7.Get_answer();
    eq8.show();
    eq8.Get_answer();
    eq8.Get_answer_podbor();
    return 0;
}