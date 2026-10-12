/*
  Q. State of Water

  Read the temperature of water in degrees Celsius and print its state:
     0 or below : Ice (solid)
     1 to 99    : Liquid water
     100 or more: Steam (gas)

  Example input : 35
  Example output:
  Enter temperature in Celsius: Water is in liquid state.
*/

#include <iostream>
using namespace std;

int main() {
    double temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;

    if (temp <= 0) {
        cout << "Water is in solid state (ice)." << endl;
    } else if (temp < 100) {
        cout << "Water is in liquid state." << endl;
    } else {
        cout << "Water is in gaseous state (steam)." << endl;
    }

    return 0;
}
