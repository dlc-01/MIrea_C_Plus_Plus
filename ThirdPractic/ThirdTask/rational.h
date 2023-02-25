#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
public:
    Rational(int a1 = 0, int b1 = 1);
    void set(int a1, int b1);
    void show() const;
    Rational operator+(const Rational& r) const;
    Rational& operator++(); 
    bool operator==(const Rational& r) const;
    bool operator>(const Rational& r) const;
    Rational& operator=(const Rational& r);
    friend Rational operator-(const Rational& r1, const Rational& r2); 
private:
    void reduce();
    int gcd(int a, int b) const;
    int a, b; /
};

#endif 
