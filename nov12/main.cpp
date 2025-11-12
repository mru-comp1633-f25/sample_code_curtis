#include "mylib.h"
#include "time.h"
#include <iostream>
using namespace std;

int main() {
//    read_lego();
    STime now = {9, 7, 0};
    Time bedtime;
    bedtime.set(11,0,0);
    bedtime.write(cout);
    cout << endl;

    // allocate on the heap
    Time *later = new Time;
    later->set(5,0,0);
    later->write(cout);
    cout << endl;

    delete later;
    
    return 0;
}
