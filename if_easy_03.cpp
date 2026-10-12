/*
  Q. Pass Check

  A student passes if he/she scores 40 or more marks. Read the marks and
  print a congratulation message if the student has passed.

  Example input : 56
  Example output:
  Enter marks (0-100): Congratulations! You have passed.
*/

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks >= 40) {
        cout << "Congratulations! You have passed." << endl;
    }

    return 0;
}
