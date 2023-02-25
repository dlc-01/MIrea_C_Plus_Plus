
#ifndef RATIONAL_H
#define RATIONAL_H


class Rational {
public:
    Rational(int a1 = 0, int b1 = 1);
    void set(int a1, int b1);
    void show() const;
private:
    int a, b;
    void reduce();
};

#endif 
