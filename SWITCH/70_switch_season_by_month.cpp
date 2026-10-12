// Program 70: Season from month
// Category: switch statement
#include <iostream>
using namespace std;

int main() {
    int m; cout << "Enter month number (1-12): "; cin >> m;
    switch (m) {
        case 12: case 1: case 2:
            cout << "Winter" << endl; break;
        case 3: case 4: case 5:
            cout << "Spring" << endl; break;
        case 6: case 7: case 8:
            cout << "Summer" << endl; break;
        case 9: case 10: case 11:
            cout << "Autumn" << endl; break;
        default:
            cout << "Invalid month" << endl;
    }
    return 0;
}
