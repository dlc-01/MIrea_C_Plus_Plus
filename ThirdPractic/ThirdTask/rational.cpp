#include "rational.h"
#include <iostream>
#include <cstdlib>

using namespace std;

// constructor
Rational::Rational(int a1, int b1) {
    set(a1, b1);
}

// set values in the object
void Rational::set(int a1, int b1) {
    // check for denominator not equal to 0
    if (b1 == 0) {
        cerr << "Error: denominator cannot be 0." << endl;
        exit(1);
    }

    // divide evenly if numerator > denominator
    if (a1 > b1) {
        a1 = a1 % b1;
    }

    // reduce fraction
    a = a1;
    b = b1;
    reduce();
}

// output the fraction in the form of a/b
void Rational::show() const {
    cout << a << "/" << b;
}

// addition operator
Rational Rational::operator+(const Rational& r) const {
    int new_a = a * r.b + b * r.a;
    int new_b = b * r.b;
    Rational result(new_a, new_b);
    result.reduce();
    return result;
}

// prefix increment operator
Rational& Rational::operator++() {
    a += b;
    reduce();
    return *this;
}

// equality operator
bool Rational::operator==(const Rational& r) const {
    return a == r.a && b == r.b;
}

// greater than operator
bool Rational::operator>(const Rational& r) const {
    return a * r.b > r.a * b;
}

// assignment operator
Rational& Rational::operator=(const Rational& r) {
    a = r.a;
    b = r.b;
    return *this;
}

// subtraction operator
Rational operator-(const Rational& r1, const Rational& r2) {
    int new_a = r1.a * r2.b - r2.a * r1.b;
    int new_b = r1.b * r2.b;
    Rational result(new_a, new_b);
    result.reduce();
    return result;
}

// reduce fraction
void Rational::reduce() {
    int g = gcd(a, b);
    a /= g;
    b /= g;
}

// greatest common divisor
int Rational::gcd(int a, int b) const {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}
