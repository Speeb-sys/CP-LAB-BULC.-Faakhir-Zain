/*
  Q. Parking Fee Calculator

  A parking lot charges by vehicle type (1 = Bike, 2 = Car, 3 = Truck):
     Bike : Rs. 10 for the first hour, Rs. 5 per extra hour,  daily maximum Rs. 50
     Car  : Rs. 20 for the first hour, Rs. 10 per extra hour, daily maximum Rs. 100
     Truck: Rs. 40 for the first hour, Rs. 20 per extra hour, daily maximum Rs. 200
  Read the vehicle type and the parking hours (whole hours) and print the fee.

  Example input : 2 5
  Example output:
  Vehicle type (1-Bike, 2-Car, 3-Truck): Parking hours: Parking fee: Rs. 60
*/

#include <iostream>
using namespace std;

int main() {
    int type, hours, firstHour = 0, extraHour = 0, maxFee = 0, fee;

    cout << "Vehicle type (1-Bike, 2-Car, 3-Truck): ";
    cin >> type;
    cout << "Parking hours: ";
    cin >> hours;

    if (type == 1) {
        firstHour = 10; extraHour = 5; maxFee = 50;
    } else if (type == 2) {
        firstHour = 20; extraHour = 10; maxFee = 100;
    } else if (type == 3) {
        firstHour = 40; extraHour = 20; maxFee = 200;
    }

    if (maxFee == 0 || hours <= 0) {
        cout << "Invalid vehicle type or hours!" << endl;
    } else {
        if (hours == 1) {
            fee = firstHour;
        } else {
            fee = firstHour + (hours - 1) * extraHour;
        }

        if (fee > maxFee) {
            fee = maxFee;
            cout << "(Daily maximum applied)" << endl;
        }
        cout << "Parking fee: Rs. " << fee << endl;
    }

    return 0;
}
