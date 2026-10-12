// Program 65: Remarks from grade letter
// Category: switch statement
#include <iostream>
using namespace std;

int main() {
    char g; cout << "Enter grade (A-F): "; cin >> g;
    switch (g) {
        case 'A': cout << "Excellent" << endl; break;
        case 'B': cout << "Very good" << endl; break;
        case 'C': cout << "Good" << endl; break;
        case 'D': cout << "Pass" << endl; break;
        case 'F': cout << "Fail" << endl; break;
        default: cout << "Invalid grade" << endl;
    }
    return 0;
}
