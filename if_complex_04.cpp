/*
  Q. Date Validation

  Read a date as day, month and year and check whether it is a valid date.
  Consider the number of days in each month and leap years (February has 29
  days in a leap year). Use only 'if' statements.

  Example input : 29 2 2024
  Example output:
  Enter date (day month year): 29/2/2024 is a valid date.
*/

#include <iostream>
using namespace std;

int main() {
    int d, m, y, maxDays = 31, valid = 1;
    cout << "Enter date (day month year): ";
    cin >> d >> m >> y;

    if (y < 1) {
        valid = 0;
    }
    if (m < 1 || m > 12) {
        valid = 0;
    }
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        maxDays = 30;
    }
    if (m == 2) {
        maxDays = 28;
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
            maxDays = 29;
        }
    }
    if (d < 1 || d > maxDays) {
        valid = 0;
    }

    if (valid == 1) {
        cout << d << "/" << m << "/" << y << " is a valid date." << endl;
    }
    if (valid == 0) {
        cout << d << "/" << m << "/" << y << " is NOT a valid date." << endl;
    }

    return 0;
}
