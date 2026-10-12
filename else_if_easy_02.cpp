/*
  Q. Grade from Marks

  Read marks (0-100) and print the grade:
     90-100 : A     80-89 : B     70-79 : C     60-69 : D     below 60 : F
  Print an error for marks outside 0-100.

  Example input : 73
  Example output:
  Enter marks (0-100): Grade: C
*/

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks!" << endl;
    } else if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
