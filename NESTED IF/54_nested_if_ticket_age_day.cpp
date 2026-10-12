// Program 54: Ticket price by age and day
// Category: nested-if statement
#include <iostream>
using namespace std;

int main() {
    int age; char weekend;
    cout << "Enter age: "; cin >> age;
    cout << "Is it weekend? (y/n): "; cin >> weekend;
    if (age < 12) {
        if (weekend == 'y') {
            cout << "Price: 6" << endl;
        } else {
            cout << "Price: 4" << endl;
        }
    } else {
        if (weekend == 'y') {
            cout << "Price: 12" << endl;
        } else {
            cout << "Price: 8" << endl;
        }
    }
    return 0;
}
