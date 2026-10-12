// Program 64: Vowel or consonant
// Category: switch statement
#include <iostream>
using namespace std;

int main() {
    char ch; cout << "Enter a lowercase letter: "; cin >> ch;
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonant (or not a vowel)" << endl;
    }
    return 0;
}
