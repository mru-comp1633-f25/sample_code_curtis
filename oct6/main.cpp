#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
//    double temps[MAX_SIZE]; // more than needed
//    int size = read_temps(temps);
    // print(temps, size);

    char connect4[ROWS][COLS];
    // = {
    //     {'R','B','R','B','R','B', 'R'},
    //     {'R'}
    // };
    initialize(connect4);

    for (int r = 0; r < ROWS; ++r) {
        cout << "Row index " << r << ": ";
        for (int c = 0; c < COLS; ++c) {
            cout << connect4[r][c] << ' ';
        }
        cout << endl;
    }

    cout << "row 0 address: " << connect4[0] << endl;

    // print a column
    for (int r = 0; r < ROWS; ++r) {
        cout << connect4[r][0];
    }

    char cstring[MAX_SIZE] = {'a','e','i','o','u'};
    cout << cstring << endl;
    cstring[5] = '\0';
    cout << cstring << endl;

    cstring[5] = 65;
    cstring[6] = '1';
    cstring[7] = '\0';
    cout << cstring << endl;
    
    char hello[] = "Hello! 111";
    cout << hello << endl;
    hello[0] = 'X';
    cout << hello << endl;
    
    
    return 0;
}
