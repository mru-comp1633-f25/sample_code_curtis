#ifndef MYLIB_H
#define MYLIB_H


// structure declarations
// no memory allocated
struct DataPoint {
    double x = 0.0;
    double y = 0.0;
    char colour = 'k'; // black
    char desc[64] = "Default";
};

// constants

// function declarations
void print(DataPoint &pt);
DataPoint random_pt();

#endif // MYLIB_H
