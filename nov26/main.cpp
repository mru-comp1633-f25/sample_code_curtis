#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    int a[] = {0, 2, 4, 6, 8, 10, 20};
    int n;
    cout << "Enter a number to look for in array: ";
    cin >> n;

    if (in_array(n, a, 7)) {
        cout << "Yep, it's in there\n";
    } else {
        cout << "No, not found\n";
    }
    
    return 0;
}
