#ifndef MYLIB_H
#define MYLIB_H

// constants
const int MAX_SIZE = 64;
const int ROWS = 6;
const int COLS = 7;

// function declarations
int read_temps(double temps[MAX_SIZE]);
void print(const double temps[MAX_SIZE], int size);
void initialize(char connect4[ROWS][COLS]);
bool check_row(const char row[COLS]);

#endif // MYLIB_H
