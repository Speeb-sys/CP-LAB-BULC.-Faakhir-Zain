/*
  Q. Days in a Month

  Read a month number (1-12) and a year, and print the number of days in that
  month. Take care of leap years for February.

  Example input : 2 2024
  Example output:
  Enter month (1-12): Enter year: 29 days
*/

#include <iostream>
using namespace std;

int main() {
    int month, year;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    int leap = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

    if (month < 1 || month > 12) {
        cout << "Invalid month!" << endl;
    } else if (month == 2 && leap) {
        cout << "29 days" << endl;
    } else if (month == 2) {
        cout << "28 days" << endl;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        cout << "30 days" << endl;
    } else {
        cout << "31 days" << endl;
    }

    return 0;
}
