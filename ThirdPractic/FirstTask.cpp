#include <iostream>
#include <cmath>

class eq2 {
private:
    double a, b, c, D;

public:
    eq2(double a1, double b1, double c1) {
        a = a1;
        b = b1;
        c = c1;
        D = b * b - 4 * a * c;
    }

    void set(double a1, double b1, double c1) {
        a = a1;
        b = b1;
        c = c1;
        D = b * b - 4 * a * c;
    }

    double find_X() {
        if (D < 0) {
            std::cout << "No roots" << std::endl;
            return 0;
        }
        else {
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);
            return fmax(x1, x2);
        }
    }

    double find_Y(double x1) {
        return a * x1 * x1 + b * x1 + c;
    }

    eq2 operator+(eq2& other) {
        return eq2(a + other.a, b + other.b, c + other.c);
    }
};

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    eq2 equation1 (a, b, c);
    std::cin >> a >> b >> c;
    eq2 equation2 (a, b, c);


    std::cout << "Equation 1: " << equation1.find_X() << std::endl;
    std::cout << "Equation 2: " << equation2.find_X() << std::endl;

    eq2 equation3 = equation1 + equation2;

    std::cout << "Equation 3: " << equation3.find_X() << std::endl;

    return 0;
}
