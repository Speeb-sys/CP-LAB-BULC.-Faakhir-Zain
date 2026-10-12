/*
  Q. BMI Category

  Read weight (kg) and height (metres), calculate BMI = weight / (height^2)
  and print the category:
     below 18.5 : Underweight      18.5 - 24.9 : Normal
     25 - 29.9  : Overweight       30 or more  : Obese

  Example input : 70 1.75
  Example output:
  Enter weight (kg): Enter height (m): Your BMI is 22.8571 -> Normal weight
*/

#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "Your BMI is " << bmi << " -> ";

    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi < 25) {
        cout << "Normal weight" << endl;
    } else if (bmi < 30) {
        cout << "Overweight" << endl;
    } else {
        cout << "Obese" << endl;
    }

    return 0;
}
