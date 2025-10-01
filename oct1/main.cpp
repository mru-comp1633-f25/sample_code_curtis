#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    // big enough for integer overflow
    const int SIZE = 50;
    
    int fib[SIZE];

    // populate the fib array
    fibonacci(fib, SIZE);
    
    cout << "sizeof(fib): "
         << sizeof(fib) << endl;
    print_reverse(fib, SIZE);
    
    return 0;
}
