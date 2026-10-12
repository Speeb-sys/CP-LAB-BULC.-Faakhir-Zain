// Program 68: Restaurant menu
// Category: switch statement
#include <iostream>
using namespace std;

int main() {
    int choice; cout << "1. Burger  2. Pizza  3. Pasta  4. Salad" << endl;
    cout << "Enter your choice: "; cin >> choice;
    switch (choice) {
        case 1: cout << "Burger: 250" << endl; break;
        case 2: cout << "Pizza: 600" << endl; break;
        case 3: cout << "Pasta: 450" << endl; break;
        case 4: cout << "Salad: 200" << endl; break;
        default: cout << "Item not on menu" << endl;
    }
    return 0;
}
