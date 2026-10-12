// Program 72: Simple unit converter
// Category: switch statement
#include <iostream>
using namespace std;

int main() {
    int c; double v;
    cout << "1. km to miles  2. kg to pounds  3. C to F" << endl;
    cout << "Choose: "; cin >> c;
    cout << "Enter value: "; cin >> v;
    switch (c) {
        case 1: cout << v * 0.621371 << " miles" << endl; break;
        case 2: cout << v * 2.20462 << " pounds" << endl; break;
        case 3: cout << v * 9 / 5 + 32 << " F" << endl; break;
        default: cout << "Invalid choice" << endl;
    }
    return 0;
}
