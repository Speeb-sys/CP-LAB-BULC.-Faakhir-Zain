/*
  Q. Login System

  Create a simple login system. The registered username is "admin" and the
  password is "pass123". Read a username and a password and print:
     - "Login successful" if both match
     - "Wrong password" if only the username matches
     - "User not found" if the username does not match

  Example input : admin pass123
  Example output:
  Enter username: Enter password: Login successful. Welcome, admin!
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "admin") {
        if (password == "pass123") {
            cout << "Login successful. Welcome, admin!" << endl;
        } else {
            cout << "Wrong password. Try again." << endl;
        }
    } else {
        cout << "User not found." << endl;
    }

    return 0;
}
