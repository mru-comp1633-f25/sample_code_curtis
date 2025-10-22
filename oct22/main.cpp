#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    char a[] = "a";
    char *pa = a;

    cout << "a[]: " << a << endl;
    cout << "*pa: " << pa << endl;

    // uninitialized variables
    int i;
    int *pi;

    cout << "i: " << i << endl;
    cout << "pi: " << pi << endl;

    // initialize to null (pointing nowhere)
    int *pt = nullptr;

    // *pt = 42; // seg fault! dereference null
    pt = &i;

    // this is getting a little out of hand
    int **ppt = &pt;

    cout << "pt: " << pt << endl;

    // pt points to i, change i through pt
    *pt = 42;
    cout << "i: " << i << endl;

    // be careful of order of operations!
    // *pt++ == *(pt++)
    (*pt)++;
    cout << "i: " << i << endl;
    *pt = 100;
    cout << "i: " << i << endl;
    
    return 0;
}
