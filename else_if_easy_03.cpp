/*
  Q. Day Name from Number

  Read a number from 1 to 7 and print the day of the week
  (1 = Monday ... 7 = Sunday). Print an error for any other number.

  Example input : 3
  Example output:
  Enter day number (1-7): Wednesday
*/

#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    if (day == 1) {
        cout << "Monday" << endl;
    } else if (day == 2) {
        cout << "Tuesday" << endl;
    } else if (day == 3) {
        cout << "Wednesday" << endl;
    } else if (day == 4) {
        cout << "Thursday" << endl;
    } else if (day == 5) {
        cout << "Friday" << endl;
    } else if (day == 6) {
        cout << "Saturday" << endl;
    } else if (day == 7) {
        cout << "Sunday" << endl;
    } else {
        cout << "Invalid day number!" << endl;
    }

    return 0;
}
