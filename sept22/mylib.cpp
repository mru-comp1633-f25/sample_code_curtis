#include "mylib.h"
#include <iostream>
using namespace std;

const char *glob_var = "I'm a global variable";

void block_scope_demo() {
    const char *loc_var = "I'm a function local variable";
    cout << "Hi, " << glob_var << endl;
    cout << "Hi, " << loc_var << endl;

    // scope block {}
    {        
        cout << "Hi, " << glob_var << endl;
        cout << "Hi, " << loc_var << endl;
        const char *block_var = "I'm a block local variable";
        cout << "Hi, " << block_var << endl;
    }

    // can't access block_var anymore
//    cout << "Hi, " << block_var << endl;    
}

void get_initial_and_age(char &initial, int &age) {
    cout << "Enter your first initial: ";
    cin >> initial;
    cout << "Enter your age: ";
    cin >> age;
}
