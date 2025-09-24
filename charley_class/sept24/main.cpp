#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    bool thunder = false;
    int x = 5;

    thunder = x;
    thunder = 'a';
    x = thunder;

    cout << "Thunder: " << thunder << endl;
    cout << "x: " << x << endl;

//    read_bool_from_cin();

    int records, time;
    cout << "Enter the number of records and total time: ";
    cin >> records >> time;
    
    if (timed_out(time, records)) {
        cout << "Timed out\n";
    } else {
        cout << "Processing success\n";
    }

    // if (records = 0) assigns 0 then evals
    if (records == 0)
        cout << "There were no records\n";
    //  cout << "hello\n"; // indentation doesn't matter!
    else {
        cout << "You processed " << records << " records\n";
    }
    
    return 0;
}
