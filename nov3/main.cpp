#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
//    const_pointers();
//    array_pointers();

    int arr[] = {1, 2, 5, 3, 8, 2, 0};
    int *pmax = max(arr, 7);

    cout << "The maximum value is " << *pmax << endl;
    cout << "at position " << pmax - arr << endl;

    // allocate on the heap
    int *p = new int;

    // my heap integer is now lost! Memory leak
    p = arr;
    
    return 0;
}
