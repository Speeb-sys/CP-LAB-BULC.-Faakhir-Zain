// Program 75: Weekday or weekend (fall-through)
// Category: switch statement
#include <iostream>
using namespace std;

int main() {
    int d; cout << "Enter day number (1=Mon ... 7=Sun): "; cin >> d;
    switch (d) {
        case 1: case 2: case 3: case 4: case 5:
            cout << "Weekday" << endl;
            break;
        case 6: case 7:
            cout << "Weekend" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }
    return 0;
}
