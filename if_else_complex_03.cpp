/*
  Q. Taxi Fare Calculator

  Calculate a taxi fare:
     - Base fare Rs. 50 covers the first 5 km; every extra km costs Rs. 12
     - Waiting time: first 10 minutes free, then Rs. 2 per extra minute
     - Night rides (10 PM - 6 AM) cost 25% extra on the total
  Read the distance (km), whether it is a night ride (1 = yes, 0 = no) and the
  waiting time (minutes). Print the fare.

  Example input : 12 1 15
  Example output:
  Enter distance in km: Night ride? (1 = yes, 0 = no): Waiting time in minutes: Night ride, total fare: Rs. 180
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    double km, wait, fare, waitCharge, multiplier;
    int night;
    string label;

    cout << "Enter distance in km: ";
    cin >> km;
    cout << "Night ride? (1 = yes, 0 = no): ";
    cin >> night;
    cout << "Waiting time in minutes: ";
    cin >> wait;

    if (km <= 5) {
        fare = 50;
    } else {
        fare = 50 + (km - 5) * 12;
    }

    if (wait > 10) {
        waitCharge = (wait - 10) * 2;
    } else {
        waitCharge = 0;
    }
    fare = fare + waitCharge;

    if (night == 1) {
        multiplier = 1.25;
        label = "Night";
    } else {
        multiplier = 1.0;
        label = "Day";
    }

    cout << label << " ride, total fare: Rs. " << fare * multiplier << endl;

    return 0;
}
