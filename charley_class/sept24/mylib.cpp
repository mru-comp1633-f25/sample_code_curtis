#include "mylib.h"
#include <iostream>

using namespace std;

void read_bool_from_cin() {
    bool thunder;
    cout << "Is it thundering? (0/1)";
    cin >> thunder;
    if (thunder) {
        cout << "Thunder!\n";
    } else {
        cout << "It's safe outside\n";
    }
}

bool timed_out(int total_time, int num_records) {
    return num_records < 1 || total_time / num_records >= 1;
}
