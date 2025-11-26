#include "mylib.h"

bool in_array(int n, const int arr[], int size) {
    // base cases
    if (size == 0) {
        return false;
    }
    if (size == 1) {
        return arr[0] == n;
    }

    int middle = size / 2; // round down
    if (arr[middle] == n) {
        return true; // base case, found the value
    }
     
    if (arr[middle] < n) {
        // eliminate first half
        return in_array(n, arr + middle + 1, size - middle - 1);
    } else {
        // eliminate second half
        return in_array(n, arr, middle);
    }
}
        
