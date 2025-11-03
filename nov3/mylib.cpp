#include "mylib.h"
#include <iostream>
using namespace std;

void const_pointers() {
    int x;
    int y = 37;
    const int *pci = &y;
//    *pci = 38; // no can do, const via pci
    pci = &x;
//    *x = 20; // still const
    int * const cpi = &y;
    *cpi = 38;
//    cpi = &x; // no can do
    const int * const cpci = &y; // all const
    
}

void array_pointers() {
    char A[10] = "Hello";
    cout << A << endl;

    char *cptr = A;
    cout << cptr << endl;

    *cptr = 'J';
    cout << cptr << endl;

    // move to the next element
    cptr++;
    *cptr = 'o';
    cout << A << endl;

    // syntactic sugar
    cptr[0] = 'i';

    // same as A[3]
    *(A + 3) = 'p';
    cout << A << endl;

    // can't multiply, only add/subtract
//    cptr *= 2;
}

int *max(int arr[], int n) {
    int *p = arr;
    for (int i = 1; i < n; ++i) {
        if (arr[i] > *p) {
            p = arr + i;
        }
    }
    return p;
}
