#include "mylib.h"
#include <iostream>

using namespace std;

void read_bool_from_cin() {
    cout << "True or false? (0/1):";
    bool result;
    cin >> result;

    if (result) {
        cout << "You said true!\n";
    } else {
        cout << "You said false!\n";
    }
}

bool timed_out(int total_time, int num_records) {
    // short-circuit evaluation
    return num_records == 0 ||
        total_time / num_records > 1;
}
