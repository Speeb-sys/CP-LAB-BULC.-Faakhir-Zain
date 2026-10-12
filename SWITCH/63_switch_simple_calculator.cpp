// Program 63: Calculator with switch
// Category: switch statement
#include <iostream>
using namespace std;

int main() {
    double a, b; char op;
    cout << "Enter expression (e.g. 5 + 3): "; cin >> a >> op >> b;
    switch (op) {
        case '+': cout << a + b << endl; break;
        case '-': cout << a - b << endl; break;
        case '*': cout << a * b << endl; break;
        case '/':
            if (b != 0) cout << a / b << endl;
            else cout << "Cannot divide by zero" << endl;
            break;
        default: cout << "Invalid operator" << endl;
    }
    return 0;
}
