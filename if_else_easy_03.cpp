/*
  Q. Pass or Fail

  A student passes if he/she scores 40 or more marks, otherwise fails.
  Read the marks and print PASS or FAIL.

  Example input : 35
  Example output:
  Enter marks (0-100): Result: FAIL
*/

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks >= 40) {
        cout << "Result: PASS" << endl;
    } else {
        cout << "Result: FAIL" << endl;
    }

    return 0;
}
