/*
  Q. Electricity Bill with Slabs and Surcharge

  Calculate an electricity bill from the units consumed (assume units >= 0):
     - First 100 units   : Rs. 5 per unit
     - Next 100 units    : Rs. 7 per unit
     - Above 200 units   : Rs. 10 per unit
  If the energy charge is more than Rs. 1000, add a 5% surcharge.
  Print the energy charge, surcharge and the total bill.

  Example input : 250
  Example output:
  Enter units consumed: Energy charge : Rs. 1700
  Surcharge     : Rs. 85
  Total bill    : Rs. 1785
*/

#include <iostream>
using namespace std;

int main() {
    int units, remaining, u;
    double bill = 0, surcharge = 0;
    cout << "Enter units consumed: ";
    cin >> units;

    remaining = units;

    if (remaining > 0) {            // slab 1
        u = remaining;
        if (u > 100) {
            u = 100;
        }
        bill += u * 5.0;
        remaining -= u;
    }
    if (remaining > 0) {            // slab 2
        u = remaining;
        if (u > 100) {
            u = 100;
        }
        bill += u * 7.0;
        remaining -= u;
    }
    if (remaining > 0) {            // slab 3
        bill += remaining * 10.0;
    }

    if (bill > 1000) {
        surcharge = bill * 0.05;
    }

    cout << "Energy charge : Rs. " << bill << endl;
    cout << "Surcharge     : Rs. " << surcharge << endl;
    cout << "Total bill    : Rs. " << bill + surcharge << endl;

    return 0;
}
