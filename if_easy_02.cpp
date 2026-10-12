/*
  Q. Check Even Number

  Write a program that reads an integer and prints a message if the number
  is even. (Nothing is printed for odd numbers.)

  Example input : 10
  Example output:
  Enter a number: 10 is an even number.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << n << " is an even number." << endl;
    }

    return 0;
}
