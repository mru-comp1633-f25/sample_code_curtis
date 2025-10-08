#include "mylib.h"
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

void build_name() {
    // make sure your buffer is big enough!
    char first[BUF], last[4]; // 4 is likely too small
    cout << "Enter your name: ";
    cin >> first >> last;

    cout << "You entered: " << first
         << " " << last << endl;

   
    // best to avoid mixing getline with >>, but...
    cin.ignore(1); // ignores the lingering \n char
    
    char whole_name[BUF];
    strcpy(whole_name, first);
    strcat(whole_name, last);
    
    // cout << "Enter your whole name: ";
    // cin.getline(whole_name, BUF);

    cout << "Your whole name is: " << whole_name << endl;
    

}

void read_from_file(const char fname[]) {
    ifstream fin(fname); // open the file for reading

    // guard clause - check if file opened
    if (fin.fail()) {
        cout << "Couldn't open " << fname << endl;
        return;
    }
    
    char line[BUF];
//    fin.getline(line, BUF); // loop initialization
    // end of file triggers AFTER you try to read past end
    //  while (!fin.eof()) {
    // shorthand LCV update/condition check
    while (fin.getline(line, BUF)) {
        cout << line << endl;
//        fin.getline(line, BUF); // LCV update
    }

    fin.close();
}
        
        
