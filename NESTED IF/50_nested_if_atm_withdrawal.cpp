// Program 50: ATM withdrawal check
// Category: nested-if statement
#include <iostream>
using namespace std;

int main() {
    int pin, amount; double balance = 10000;
    cout << "Enter PIN: "; cin >> pin;
    if (pin == 1111) {
        cout << "Enter amount: "; cin >> amount;
        if (amount <= balance) {
            cout << "Take your cash: " << amount << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    } else {
        cout << "Wrong PIN" << endl;
    }
    return 0;
}
