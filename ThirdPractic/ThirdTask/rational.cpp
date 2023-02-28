#include "rational.h"
#include <iostream>
#include <cstdlib>

using namespace std;

// constructor
rational::rational(int a1, int b1) {
    set(a1, b1);
}

// set values in the object
void rational::set(int a1, int b1) {
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
void rational::show() const {
    cout << a << "/" << b;
}

// addition operator
rational rational::operator+(const rational& r) const {
    int new_a = a * r.b + b * r.a;
    int new_b = b * r.b;
    rational result(new_a, new_b);
    result.reduce();
    return result;
}

// prefix increment operator
rational& rational::operator++() {
    a += b;
    reduce();
    return *this;
}

// equality operator
bool rational::operator==(const rational& r) const {
    return a == r.a && b == r.b;
}

// greater than operator
bool rational::operator>(const rational& r) const {
    return a * r.b > r.a * b;
}

// assignment operator
rational& rational::operator=(const rational& r) {
    a = r.a;
    b = r.b;
    return *this;
}

// subtraction operator
rational operator-(const rational& r1, const rational& r2) {
    int new_a = r1.a * r2.b - r2.a * r1.b;
    int new_b = r1.b * r2.b;
    rational result(new_a, new_b);
    result.reduce();
    return result;
}

// reduce fraction
void rational::reduce() {
    int g = gcd(a, b);
    a /= g;
    b /= g;
}

// greatest common divisor
int rational::gcd(int a, int b) const {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}
