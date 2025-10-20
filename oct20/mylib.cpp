#include "mylib.h"
#include <iostream>
#include <random>
#include <cstring>

void print(DataPoint &pt) {
    std::cout << pt.desc << ": "
              << "[" << pt.x << ", " << pt.y << "]"
              << "(" << pt.colour << ")\n";
}

DataPoint random_pt() {
    // create a random valued datapoint
    DataPoint p;

    // random numbers are complicated
    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform(0, 100);
    p.x = uniform(e1);
    p.y = uniform(e1);
    p.colour = 'r';

    if (p.x > 50) {
        strcpy(p.desc, "High number");
    } else {
        strcpy(p.desc, "Low number");
    }

    return p;
}
