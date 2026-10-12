/*
  Q. Leap Year Checker

  Read a year and print whether it is a leap year.
  
  A year is a leap year if it is divisible by 400, or divisible by 4 but
  not by 100.

  Example input : 1900
  Example output:
  Enter a year: 1900 is not a leap year.
*/

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
