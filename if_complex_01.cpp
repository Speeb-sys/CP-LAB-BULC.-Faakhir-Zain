/*
  Q. Sort Three Numbers

  Read three integers and print them in ascending order.
  Use only 'if' statements and swapping (no arrays, no sorting functions).

  Example input : 30 10 20
  Example output:
  Enter three numbers: Ascending order: 10 20 30
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c, temp;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Three compare-and-swap steps are enough to sort 3 numbers
    if (a > b) {
        temp = a; a = b; b = temp;
    }
    if (b > c) {
        temp = b; b = c; c = temp;
    }
    if (a > b) {
        temp = a; a = b; b = temp;
    }

    cout << "Ascending order: " << a << " " << b << " " << c << endl;

    return 0;
}
