/*
  Q. Salary Bonus

  A company gives a bonus on the basic salary:
     - Salary below Rs. 20000  : 10% bonus
     - Salary Rs. 20000 or more: 5% bonus
  Read the salary and print the bonus and the total salary.

  Example input : 18000
  Example output:
  Enter basic salary: Bonus        : Rs. 1800
  Total salary : Rs. 19800
*/

#include <iostream>
using namespace std;

int main() {
    double salary, bonus;
    cout << "Enter basic salary: ";
    cin >> salary;

    if (salary < 20000) {
        bonus = salary * 0.10;
    } else {
        bonus = salary * 0.05;
    }

    cout << "Bonus        : Rs. " << bonus << endl;
    cout << "Total salary : Rs. " << salary + bonus << endl;

    return 0;
}
