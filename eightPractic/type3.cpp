#include "type3.h"
#include "iostream"

using namespace std;

type3::type3(double c1) {
    C = c1;
}

void type3::Get_answer() {
    cout << "There are no roots." << endl;
}

void type3::show() {
    cout << C << " = 0" << endl;
}


