/*
  Q. Detailed Electricity Bill

  Prepare an electricity bill from the units consumed (assume units >= 0):
     First 100 units   : Rs. 3.50 per unit
     101 - 200 units   : Rs. 5.00 per unit
     201 - 300 units   : Rs. 7.00 per unit
     Above 300 units   : Rs. 9.50 per unit
  A fixed meter charge of Rs. 50 is added. A surcharge is also added on the
  energy charge: 10% if energy charge > Rs. 2000, 5% if > Rs. 1000, else none.
  Print the complete bill.

  Example input : 320
  Example output:
  Enter units consumed: -------- ELECTRICITY BILL --------
  Units consumed : 320
  Energy charge  : Rs. 1740
  Surcharge (5%): Rs. 87
  Fixed charge   : Rs. 50
  TOTAL PAYABLE  : Rs. 1877
*/

#include <iostream>
using namespace std;

int main() {
    int units;
    double energy, surchargeRate, surcharge, fixedCharge = 50;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units <= 100) {
        energy = units * 3.5;
    } else if (units <= 200) {
        energy = 100 * 3.5 + (units - 100) * 5.0;
    } else if (units <= 300) {
        energy = 100 * 3.5 + 100 * 5.0 + (units - 200) * 7.0;
    } else {
        energy = 100 * 3.5 + 100 * 5.0 + 100 * 7.0 + (units - 300) * 9.5;
    }

    if (energy > 2000) {
        surchargeRate = 10;
    } else if (energy > 1000) {
        surchargeRate = 5;
    } else {
        surchargeRate = 0;
    }
    surcharge = energy * surchargeRate / 100;

    cout << "-------- ELECTRICITY BILL --------" << endl;
    cout << "Units consumed : " << units << endl;
    cout << "Energy charge  : Rs. " << energy << endl;
    cout << "Surcharge (" << surchargeRate << "%): Rs. " << surcharge << endl;
    cout << "Fixed charge   : Rs. " << fixedCharge << endl;
    cout << "TOTAL PAYABLE  : Rs. " << energy + surcharge + fixedCharge << endl;

    return 0;
}
