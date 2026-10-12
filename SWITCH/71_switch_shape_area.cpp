// Program 71: Area of a shape
// Category: switch statement
#include <iostream>
using namespace std;

int main() {
    int s; cout << "1. Square  2. Circle  3. Triangle" << endl;
    cout << "Choose shape: "; cin >> s;
    double x, y;
    switch (s) {
        case 1:
            cout << "Enter side: "; cin >> x;
            cout << "Area: " << x * x << endl;
            break;
        case 2:
            cout << "Enter radius: "; cin >> x;
            cout << "Area: " << 3.14159 * x * x << endl;
            break;
        case 3:
            cout << "Enter base and height: "; cin >> x >> y;
            cout << "Area: " << 0.5 * x * y << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    return 0;
}
