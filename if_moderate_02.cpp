/*
  Q. Largest of Three Numbers

  Read three integers and print the largest one using only 'if' statements.

  Example input : 12 45 31
  Example output:
  Enter three numbers: The largest number is 45
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c, largest;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }

    cout << "The largest number is " << largest << endl;

    return 0;
}
