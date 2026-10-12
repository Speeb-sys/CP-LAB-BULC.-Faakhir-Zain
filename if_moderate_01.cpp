/*
  Q. Leap Year Using Only if

  Read a year and tell whether it is a leap year, using only 'if'
  statements (no else).
  
  Rules: divisible by 4 -> leap, BUT divisible by 100 -> not leap,
  BUT divisible by 400 -> leap again.

  Example input : 2024
  Example output:
  Enter a year: 2024 is a leap year.
*/

#include <iostream>
using namespace std;

int main() {
    int year, leap = 0;
    cout << "Enter a year: ";
    cin >> year;

    // Each rule overrides the previous one
    if (year % 4 == 0) {
        leap = 1;
    }
    if (year % 100 == 0) {
        leap = 0;
    }
    if (year % 400 == 0) {
        leap = 1;
    }

    if (leap == 1) {
        cout << year << " is a leap year." << endl;
    }
    if (leap == 0) {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
