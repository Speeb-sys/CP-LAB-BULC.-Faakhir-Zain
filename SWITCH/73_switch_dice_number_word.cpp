// Program 73: Dice number as a word
// Category: switch statement
#include <iostream>
using namespace std;

int main() {
    int d; cout << "Enter dice value (1-6): "; cin >> d;
    switch (d) {
        case 1: cout << "One" << endl; break;
        case 2: cout << "Two" << endl; break;
        case 3: cout << "Three" << endl; break;
        case 4: cout << "Four" << endl; break;
        case 5: cout << "Five" << endl; break;
        case 6: cout << "Six" << endl; break;
        default: cout << "Not a valid dice value" << endl;
    }
    return 0;
}
