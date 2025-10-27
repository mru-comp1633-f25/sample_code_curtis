#include "mylib.h"
#include <iostream>
using namespace std;

// by reference: dangling pointer
// by value: nothing happens

void foo(int *&iptr) {
    int x = 42;
    iptr = &x;
}

void array() {
    int nums[8];
    for (int i = 0; i < 8; ++i) {
        cout << nums[i] << endl;
    }

    cout << nums[-1] << endl;
}
