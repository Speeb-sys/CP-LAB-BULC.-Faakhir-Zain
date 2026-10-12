// Program 67: Days in a month
// Category: switch statement
#include <iostream>
using namespace std;

int main() {
    int m; cout << "Enter month number (1-12): "; cin >> m;
    switch (m) {
        case 2:
            cout << "28 or 29 days" << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "30 days" << endl;
            break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 days" << endl;
            break;
        default:
            cout << "Invalid month" << endl;
    }
    return 0;
}
