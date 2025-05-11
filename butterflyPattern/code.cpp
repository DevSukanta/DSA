#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // top
    for (int i = 1; i <= n; i++) {
        // Left wing
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        // Spaces in the middle
        for (int j = 0; j < 2 * (n - i); j++) {
            cout << " ";
        }

        // Right wing
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half of the butterfly
    for (int i = n; i >= 1; i--) {
        // Left wing
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        // Spaces in the middle
        for (int j = 0; j < 2 * (n - i); j++) {
            cout << " ";
        }

        // Right wing
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
