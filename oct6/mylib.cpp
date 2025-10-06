#include "mylib.h"
#include <iostream>
using namespace std;


int read_temps(double temps[]) {
    int size = 0;
    cout << "Enter the temperature (-100 to stop): ";
    double t;
    cin >> t;
    while (t != -100 && size < MAX_SIZE) {
        temps[size] = t;
        ++size;
        cout << "Enter the temperature (-100 to stop): ";
        cin >> t;
    }
    return size;
}
    
void print(const double temps[], int size) {
    cout << "[";
    for (int i = 0; i < size; ++i) {
        cout << temps[i] << " ";
    }
    cout << "]\n";
}

void initialize(char connect4[ROWS][COLS]) {
    for (int r = 0; r < ROWS; ++r) {
        for (int c = 0; c < COLS; ++c) {
            connect4[r][c] = '.';
        }
    }
}
