#include "time.h"
#include <iostream>
using namespace std;

int main() {
    Time bedtime(11, 30, 0);
    cout << "Bedtime is: " << bedtime << endl;

    // add time to bedtime
    bedtime = bedtime + Time(0, 30, 0);
    // the compiler sees it like this...
    bedtime = bedtime.operator+(Time(0, 30, 0));
    
    cout << "Bedtime is now " << bedtime << endl;
    
    // allocate on the heap
    Time *later = new Time;
    later->set(5,0,0);
    cout << "Later is: " << *later <<  endl;

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
