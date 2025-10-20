#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    DataPoint p1, p3;
    // only recommended for very simple structures
    DataPoint p2 = {1, 2, 'g'};    

    p1.x = 3.0;
    p1.y = 4.5;
    p1.colour = 'r';

    // compile error: operator<< not defined
//    cout << p1 << endl
    print(p1);
    print(p2);
    print(p3); // default values

    // can't compile, no operator== defined
    // if (p1 == p3) {
    //     cout << "Equal!\n";
    // } else {
    //     cout << "Not equal!\n";
    // }

    DataPoint r1 = random_pt();
    DataPoint r2 = random_pt();

    cout << "r1: \n";
    print(r1);
    cout << "r2: \n";
    print(r2);

    const int SIZE = 10;
    DataPoint plot[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        plot[i] = random_pt();
    }

    // look at the first one
    print(plot[0]);
    
    return 0;
}
