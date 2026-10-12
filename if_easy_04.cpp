/*
  Q. Voting Eligibility

  A person can vote if his/her age is 18 or more. Read the age and print
  a message if the person is eligible to vote.

  Example input : 19
  Example output:
  Enter your age: You are eligible to vote.
*/

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    }

    return 0;
}
