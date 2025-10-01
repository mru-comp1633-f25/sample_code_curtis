#include "mylib.h"
#include <iostream>

using namespace std;

void fibonacci(int fib[], int n) {
    if (n < 2) { // guard clause
        return;
    }

    fib[0] = 1;
    fib[1] = 1;
    
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    return;
}

void print_reverse(const int arr[], int size) {
    cout << arr << endl;
    cout << "sizeof(arr): " << sizeof(arr) << endl;

    // can't modify, now const
//    arr[0] = 0;
    
    for (int i = size - 1; i >= 0; --i) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void array_memory_messiness() {
    
    const int N = 10;
    double some_other_nums[] = {1.5, 2.5, 4};
    int numbers[N] = {};

    cout << "sizeof(numbers): "
         << sizeof(numbers) << endl;

    for (int i = 0; i < N; ++i) {
        numbers[i] = i;
        cout << numbers[i] << " ";
    }
    cout << endl;

    numbers[-1] = -1;
    cout << "numbers[10]: "
         << numbers[10] << endl;
    cout << "numbers[100000]: "
         << numbers[100000] << endl;
    cout << "numbers[-1]: "
         << numbers[-1] << endl;
}
