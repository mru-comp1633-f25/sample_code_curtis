#include "time.h"
#include <iostream>
using namespace std;

int main() {
    Time bedtime(11, 0,0);
    bedtime.write(cout);
    cout << endl;
    //cout << bedtime << endl;

    // allocate on the heap
    Time *later = new Time;
    later->set(5,0,0);
    later->write(cout);
    cout << endl;

    // is bedtime before later?
//    if (bedtime.operator<(*later)) {
    if (bedtime < *later) {
        cout << "Bedtime before later?\n";
    } else {
        cout << "At least the same, or bedtime after\n";
    }

    delete later;
    
    return 0;
}
