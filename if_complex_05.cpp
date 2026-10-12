/*
  Q. ATM Withdrawal Validator

  Read the account balance and the amount to withdraw. Allow the
  withdrawal only if ALL of these conditions are satisfied:
     1. The amount is greater than 0
     2. The amount is a multiple of 100
     3. The amount is not more than the daily limit of Rs. 20000
     4. The amount is not more than the available balance
  Print a suitable message for each failed condition, otherwise print the
  amount dispensed and the remaining balance. Use only 'if' statements.

  Example input : 15000 2500
  Example output:
  Enter account balance: Enter amount to withdraw: Please collect your cash: Rs. 2500
  Remaining balance: Rs. 12500
*/

#include <iostream>
using namespace std;

int main() {
    int balance, amount, ok = 1;
    cout << "Enter account balance: ";
    cin >> balance;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Error: amount must be greater than 0." << endl;
        ok = 0;
    }
    if (ok == 1 && amount % 100 != 0) {
        cout << "Error: amount must be a multiple of 100." << endl;
        ok = 0;
    }
    if (ok == 1 && amount > 20000) {
        cout << "Error: daily limit of Rs. 20000 exceeded." << endl;
        ok = 0;
    }
    if (ok == 1 && amount > balance) {
        cout << "Error: insufficient balance." << endl;
        ok = 0;
    }

    if (ok == 1) {
        balance = balance - amount;
        cout << "Please collect your cash: Rs. " << amount << endl;
        cout << "Remaining balance: Rs. " << balance << endl;
    }

    return 0;
}
