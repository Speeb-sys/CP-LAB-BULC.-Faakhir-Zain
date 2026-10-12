/*
  Q. Compare Two Dates

  Read two dates (day month year each) and print whether the first date is
  earlier than, later than, or the same as the second date.

  Example input : 15 8 2023 20 3 2024
  Example output:
  Enter first date (day month year): Enter second date (day month year): The first date is earlier.
*/

#include <iostream>
using namespace std;

int main() {
    int d1, m1, y1, d2, m2, y2;
    cout << "Enter first date (day month year): ";
    cin >> d1 >> m1 >> y1;
    cout << "Enter second date (day month year): ";
    cin >> d2 >> m2 >> y2;

    if (y1 != y2) {
        if (y1 < y2) {
            cout << "The first date is earlier." << endl;
        } else {
            cout << "The first date is later." << endl;
        }
    } else {
        if (m1 != m2) {
            if (m1 < m2) {
                cout << "The first date is earlier." << endl;
            } else {
                cout << "The first date is later." << endl;
            }
        } else {
            if (d1 != d2) {
                if (d1 < d2) {
                    cout << "The first date is earlier." << endl;
                } else {
                    cout << "The first date is later." << endl;
                }
            } else {
                cout << "Both dates are the same." << endl;
            }
        }
    }

    return 0;
}
