// Program 47: Vote if adult and citizen
// Category: nested-if statement
#include <iostream>
using namespace std;

int main() {
    int age; char citizen;
    cout << "Enter age: "; cin >> age;
    cout << "Are you a citizen? (y/n): "; cin >> citizen;
    if (age >= 18) {
        if (citizen == 'y') {
            cout << "You can vote" << endl;
        } else {
            cout << "Only citizens can vote" << endl;
        }
    } else {
        cout << "You are under 18" << endl;
    }
    return 0;
}
