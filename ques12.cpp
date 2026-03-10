#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    // Check validity
    if (a + b <= c || b + c <= a || a + c <= b) {
        cout << "Not a valid triangle";
    }
    else if (a == b && b == c) {
        cout << "Equilateral Triangle";
    }
    else if (a == b || b == c || a == c) {
        cout << "Isosceles Triangle";
    }
    else {
        cout << "Scalene Triangle";
    }

    return 0;
}
