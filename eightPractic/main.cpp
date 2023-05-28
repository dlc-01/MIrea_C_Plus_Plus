#include "iostream"
#include "type3.h"
#include "type4.h"
using namespace std;

int main() {
    cout << "Basic level" << endl;
    cout << "Type 3 equation" << endl << "Enter C" << endl;
    double c;
    cin >> c;
    type3 EquationType3(c);
    EquationType3.show();
    EquationType3.Get_answer();
    cout << "--------" << endl;
    cout << "Type 4 equation" << endl << "Enter A and C with a space" << endl;
    double a, c1;
    cin >> a >> c1;
    type4 EquationType4(a, c1);
    EquationType4.show();
    EquationType4.Get_answer();
    return 0;
}