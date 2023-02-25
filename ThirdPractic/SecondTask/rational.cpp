#include <iostream>
#include "rational.h"

using namespace std;


Rational::Rational(int a1, int b1) {

    if (b1 == 0) {
        cerr << "Error: denominator cannot be 0." << endl;
        exit(1);
    }

    if (a1 > b1) {
        a = a1 % b1;
        b = b1;
    } else {
        a = a1;
        b = b1;
    }

    reduce();
}

void Rational::set(int a1, int b1) {

    if (b1 == 0) {
        cerr << "Error: denominator cannot be 0." << endl;
        exit(1);
    }

    if (a1 > b1) {
        a = a1 % b1;
        b = b1;
    } else {
        a = a1;
        b = b1;
    }

    reduce();
}


void Rational::show() const {
    cout << a << "/" << b << endl;
}


void Rational::reduce() {

    int gcd = 1;
    for (int i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    a /= gcd;
    b /= gcd;
}
