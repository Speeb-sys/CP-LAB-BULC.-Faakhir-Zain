/*
  Q. Vowel or Consonant

  Read a single character. If it is an English letter, print whether it is
  a vowel or a consonant. If it is not a letter, print an error message.

  Example input : E
  Example output:
  Enter a character: E is a vowel.
*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    int isLetter = (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');

    if (isLetter) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << ch << " is a vowel." << endl;
        } else {
            cout << ch << " is a consonant." << endl;
        }
    } else {
        cout << ch << " is not an alphabet." << endl;
    }

    return 0;
}
