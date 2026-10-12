// Program 69: Value of a coin
// Category: switch statement
#include <iostream>
using namespace std;

int main() {
    int coin; cout << "Enter coin (1, 2, 5, 10): "; cin >> coin;
    switch (coin) {
        case 1: cout << "One rupee coin" << endl; break;
        case 2: cout << "Two rupee coin" << endl; break;
        case 5: cout << "Five rupee coin" << endl; break;
        case 10: cout << "Ten rupee coin" << endl; break;
        default: cout << "Unknown coin" << endl;
    }
    return 0;
}
