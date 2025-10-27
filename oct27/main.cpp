#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    Time now = {8, 40};
    Time *pnow = &now;

    // fall back
    // ugly syntax, legal but not common
    (*pnow).hours -= 1;
    // better syntax?
    cout << "It is now " << pnow->hours
         << ":" << pnow->mins << endl;

    // slide 6
    int *iptr = nullptr;
    foo(iptr);
    cout << iptr << endl; // memory address
    cout << *iptr << endl; // what happens here?

    // demonstrate uninitialized array
    array();
    
    return 0;
}
