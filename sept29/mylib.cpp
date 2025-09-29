#include "mylib.h"
#include <iostream>

using namespace std;

void fizzbuzz(int n) {
    int x = 1;            // Initialization
    while (x <= n) {      // Condition
        cout << x;
        if (x % 3 == 0) {
            cout << "Fizz";
        }
        
        if (x % 5 == 0) {
            cout << "Buzz";
        }
        
        cout << "\n";
        x++;                // Update
    }
}

void yes_or_no() {
    cout << "Keep playing? (y/n): ";
    char r;
    cin >> r; // initialization
    // r = LCV

    while (r != 'n' && r != 'N') { // condition
        cout << "We're playing!\n"
             << "r = " << r << endl;
        cout << "Keep playing? (y/n): ";
        cin >> r; // LCV update
    }
}
        
void sentinel_example() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    int n = 0;
    while (c != '0') {
        cin >> c;
        n++;
    }

    cout << "You entered " << n << " characters\n";
}

void print_times(int n) {
    for (int r = 1; r <= n; ++r) {
        for (int c = 1; c <= n; ++c) {
            cout << c * r << '\t';
        }
        cout << '\n';
    }
}
