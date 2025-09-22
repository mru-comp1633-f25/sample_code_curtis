#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
//    block_scope_demo();

    char c;
    int a;
    get_initial_and_age(c, a);

    cout << "You wrote: " << c
         << ", " << a << endl;


    if (a >= 18) {
        cout << "Congrats, you can vote!\n";
    } else {
        cout << "You can vote in "
             << 18 - a << " years.\n";
    }
    
    return 0;
}
