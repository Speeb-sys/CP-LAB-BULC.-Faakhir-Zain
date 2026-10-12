/*
  Q. Shopping Discount

  A shop gives a discount on the total bill:
     - Bill of Rs. 1000 or more : 10% discount
     - Bill of Rs. 5000 or more : 20% discount
  Read the bill amount and print the discount and the final amount payable.

  Example input : 6500
  Example output:
  Enter total bill amount: Discount (20%): Rs. 1300
  Final amount payable: Rs. 5200
*/

#include <iostream>
using namespace std;

int main() {
    double amount, discountPercent = 0;
    cout << "Enter total bill amount: ";
    cin >> amount;

    if (amount >= 1000) {
        discountPercent = 10;
    }
    if (amount >= 5000) {
        discountPercent = 20;      // overrides the 10%
    }

    double discount = amount * discountPercent / 100;
    double finalAmount = amount - discount;

    if (discount > 0) {
        cout << "Discount (" << discountPercent << "%): Rs. " << discount << endl;
    }
    cout << "Final amount payable: Rs. " << finalAmount << endl;

    return 0;
}
