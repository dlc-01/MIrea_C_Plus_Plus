#include <iostream>
#include "rational.h"

using namespace std;

int main() {
    int n;
    cout << "Enter the number of fractions: ";
    cin >> n;
    rational *arr = new rational[n];

    for (int i = 0; i < n; i++) {
        int a, b;
        cout << "Enter the numerator and denominator for fraction " << i + 1 << ": ";
        cin >> a >> b;
        arr[i].set(a, b);
    }

    cout << "All fractions:" << endl;
    for (int i = 0; i < n; i++) {
        arr[i].show();
        cout << endl;
    }

    cout << endl << "Addition: ";
    rational sum;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    sum.show();
    cout << endl;

    cout << "Subtraction: ";
    rational diff = arr[0];
    for (int i = 1; i < n; i++) {
        diff = diff - arr[i];
    }
    diff.show();
    cout << endl;

    cout << "Increment: ";
    ++arr[0];
    arr[0].show();
    cout << endl;

    cout << "Equality: ";
    if (arr[0] == arr[1]) {
        cout << "true";
    } else {
        cout << "false";
    }
    cout << endl;

    cout << "Greater than: ";
    if (arr[0] > arr[1]) {
        cout << "true";
    } else {
        cout << "false";
    }
    cout << endl;

    cout << "Assignment: ";
    arr[0] = arr[1];
    arr[0].show();
    cout << endl;

    return 0;
}
