// Program 48: Check username then password
// Category: nested-if statement
#include <iostream>
using namespace std;

int main() {
    int user, pass; cout << "Enter user ID and password: "; cin >> user >> pass;
    if (user == 101) {
        if (pass == 9999) {
            cout << "Welcome!" << endl;
        } else {
            cout << "Wrong password" << endl;
        }
    } else {
        cout << "Unknown user" << endl;
    }
    return 0;
}
