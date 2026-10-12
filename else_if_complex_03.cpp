/*
  Q. Student Result Card

  Read the marks (out of 100) of 5 subjects. Calculate the total and the
  percentage, then print the result:
     - If marks in ANY subject are below 33  : FAIL
     - Otherwise by percentage:
          75% or more : Pass with Distinction
          60% - 74.99%: First Division
          50% - 59.99%: Second Division
          below 50%   : Third Division

  Example input : 78 85 69 90 74
  Example output:
  Enter marks of subject 1: Enter marks of subject 2: Enter marks of subject 3: Enter marks of subject 4: Enter marks of subject 5: Total      : 396 / 500
  Percentage : 79.2%
  Result     : Pass with Distinction
*/

#include <iostream>
using namespace std;

int main() {
    int marks[5], total = 0, failed = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter marks of subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
        if (marks[i] < 33) {
            failed = 1;
        }
    }

    double percentage = total / 5.0;

    cout << "Total      : " << total << " / 500" << endl;
    cout << "Percentage : " << percentage << "%" << endl;

    if (failed == 1) {
        cout << "Result     : FAIL (scored below 33 in a subject)" << endl;
    } else if (percentage >= 75) {
        cout << "Result     : Pass with Distinction" << endl;
    } else if (percentage >= 60) {
        cout << "Result     : First Division" << endl;
    } else if (percentage >= 50) {
        cout << "Result     : Second Division" << endl;
    } else {
        cout << "Result     : Third Division" << endl;
    }

    return 0;
}
