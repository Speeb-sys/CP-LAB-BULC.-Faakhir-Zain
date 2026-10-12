/*
  Q. Senior Citizen Check

  A person aged 60 or above is a senior citizen. Read the age and print
  whether the person is eligible for the senior citizen discount.

  Example input : 65
  Example output:
  Enter your age: Eligible for the senior citizen discount.
*/

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 60) {
        cout << "Eligible for the senior citizen discount." << endl;
    } else {
        cout << "Not eligible for the senior citizen discount." << endl;
    }

    return 0;
}
