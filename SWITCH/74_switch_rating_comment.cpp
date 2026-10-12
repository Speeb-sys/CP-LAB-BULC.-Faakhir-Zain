// Program 74: Comment for star rating
// Category: switch statement
#include <iostream>
using namespace std;

int main() {
    int r; cout << "Enter rating (1-5): "; cin >> r;
    switch (r) {
        case 5: cout << "Outstanding!" << endl; break;
        case 4: cout << "Great" << endl; break;
        case 3: cout << "Average" << endl; break;
        case 2: cout << "Poor" << endl; break;
        case 1: cout << "Very poor" << endl; break;
        default: cout << "Invalid rating" << endl;
    }
    return 0;
}
