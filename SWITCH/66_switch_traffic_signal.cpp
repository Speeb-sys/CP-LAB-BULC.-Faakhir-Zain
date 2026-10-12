// Program 66: Traffic signal using switch
// Category: switch statement
#include <iostream>
using namespace std;

int main() {
    char c; cout << "Enter signal (R/Y/G): "; cin >> c;
    switch (c) {
        case 'R': cout << "Stop" << endl; break;
        case 'Y': cout << "Wait" << endl; break;
        case 'G': cout << "Go" << endl; break;
        default: cout << "Invalid signal" << endl;
    }
    return 0;
}
