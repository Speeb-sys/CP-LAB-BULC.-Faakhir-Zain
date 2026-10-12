/*
  Q. Courier Shipping Charges

  A courier company charges according to the weight (kg) and the zone
  (1 = Local, 2 = National, 3 = International):
     Zone 1: up to 1 kg Rs. 40,  up to 5 kg Rs. 70,   above: Rs. 70 + Rs. 10 per extra kg
     Zone 2: up to 1 kg Rs. 80,  up to 5 kg Rs. 120,  above: Rs. 120 + Rs. 15 per extra kg
     Zone 3: up to 1 kg Rs. 250, up to 5 kg Rs. 400,  above: Rs. 400 + Rs. 60 per extra kg
  Read weight and zone and print the shipping cost.

  Example input : 3.5 2
  Example output:
  Enter weight in kg: Enter zone (1-Local, 2-National, 3-International): Shipping cost: Rs. 120
*/

#include <iostream>
using namespace std;

int main() {
    double weight, cost = 0;
    int zone;

    cout << "Enter weight in kg: ";
    cin >> weight;
    cout << "Enter zone (1-Local, 2-National, 3-International): ";
    cin >> zone;

    if (weight <= 0 || zone < 1 || zone > 3) {
        cout << "Invalid weight or zone!" << endl;
    } else {
        if (zone == 1 && weight <= 1) {
            cost = 40;
        } else if (zone == 1 && weight <= 5) {
            cost = 70;
        } else if (zone == 1) {
            cost = 70 + (weight - 5) * 10;
        } else if (zone == 2 && weight <= 1) {
            cost = 80;
        } else if (zone == 2 && weight <= 5) {
            cost = 120;
        } else if (zone == 2) {
            cost = 120 + (weight - 5) * 15;
        } else if (zone == 3 && weight <= 1) {
            cost = 250;
        } else if (zone == 3 && weight <= 5) {
            cost = 400;
        } else {
            cost = 400 + (weight - 5) * 60;
        }
        cout << "Shipping cost: Rs. " << cost << endl;
    }

    return 0;
}
