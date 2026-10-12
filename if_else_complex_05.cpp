/*
  Q. Rock Paper Scissors

  Two players choose 1 = Rock, 2 = Paper, 3 = Scissors. Read both choices and
  print the winner. Rock beats Scissors, Scissors beats Paper, Paper beats Rock.
  Print an error for any choice outside 1-3, and "Draw" for equal choices.

  Example input : 1 3
  Example output:
  1 = Rock, 2 = Paper, 3 = Scissors
  Player 1 choice: Player 2 choice: Player 1 wins!
*/

#include <iostream>
using namespace std;

int main() {
    int p1, p2;
    cout << "1 = Rock, 2 = Paper, 3 = Scissors" << endl;
    cout << "Player 1 choice: ";
    cin >> p1;
    cout << "Player 2 choice: ";
    cin >> p2;

    if (p1 < 1 || p1 > 3 || p2 < 1 || p2 > 3) {
        cout << "Invalid choice! Enter 1, 2 or 3." << endl;
    } else {
        if (p1 == p2) {
            cout << "It's a draw!" << endl;
        } else {
            if ((p1 == 1 && p2 == 3) || (p1 == 3 && p2 == 2) || (p1 == 2 && p2 == 1)) {
                cout << "Player 1 wins!" << endl;
            } else {
                cout << "Player 2 wins!" << endl;
            }
        }
    }

    return 0;
}
