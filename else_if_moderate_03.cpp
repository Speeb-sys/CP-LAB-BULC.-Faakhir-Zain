/*
  Q. Income Tax Slab

  Calculate income tax on the annual income (simple model: the rate of the
  slab is applied on the whole income):
     up to Rs. 2,50,000          : 0%
     Rs. 2,50,001 - 5,00,000     : 5%
     Rs. 5,00,001 - 10,00,000    : 10%
     above Rs. 10,00,000         : 20%
  Print the tax rate and the tax amount.

  Example input : 750000
  Example output:
  Enter annual income: Tax rate   : 10%
  Tax amount : Rs. 75000
*/

#include <iostream>
using namespace std;

int main() {
    double income, rate;
    cout << "Enter annual income: ";
    cin >> income;

    if (income <= 250000) {
        rate = 0;
    } else if (income <= 500000) {
        rate = 5;
    } else if (income <= 1000000) {
        rate = 10;
    } else {
        rate = 20;
    }

    cout << "Tax rate   : " << rate << "%" << endl;
    cout << "Tax amount : Rs. " << income * rate / 100 << endl;

    return 0;
}
