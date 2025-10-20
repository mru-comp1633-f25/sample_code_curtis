#include "mylib.h"
#include <iostream>
#include <fstream>

using namespace std;

void read_n_lines(const char filename[], int n) {
    ifstream in(filename);
    int lines = 0;
    // any time you're looping over a file, check
    // that the stream is still good in addition to
    // your other conditions
    while (in && lines < n) {
        char buf[BUF_SIZE];
        in.getline(buf, BUF_SIZE);
        cout << buf << endl;
        ++lines;
    }
    in.close();
}
    
