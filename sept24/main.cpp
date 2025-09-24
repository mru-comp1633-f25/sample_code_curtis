#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
//    read_bool_from_cin();

    cout << "Enter a total time and number of records: ";
    int total_time, num_records;
    cin >> total_time >> num_records;

    // be careful with assignment vs equality
    if (total_time = 5) {
        cout << "Time is 5!\n";
    }

    // single line without braces
    if (num_records == 0)
        cout << "No records to process\n";
        cout << "Second line in if statment\n";

    if (timed_out(total_time, num_records)) {
        cout << "Timed out!\n";
    } else {
        cout << "Processing success!\n";
    }
    return 0;
}
