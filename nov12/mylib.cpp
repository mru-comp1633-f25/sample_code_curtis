#include "mylib.h"
#include <iostream>
#include <fstream>
using namespace std;

void read_lego() {
    int num, code;
    char desc[N_CHAR];
    char colour[N_CHAR];

    ifstream in("lego.txt");
    // can use std::ws to clear newline
    // in >> num >> code >> ws;
    in >> num >> code;
    // alternatively, ignore the newline
    in.ignore(1);
    in.getline(desc, N_CHAR);
    in.getline(colour, N_CHAR);
    in.close();

    cout << "We read:\n"
         << num << " " << code << "\n"
         << desc << "\n"
         << colour << "\n";
}
    
   
    
