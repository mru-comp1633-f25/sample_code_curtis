#include "mylib.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Please provide a filename\n";
        return 1;
    }

    int n = 5;
    if (argc > 2) {
        // cli arguments are strings
        n = atoi(argv[2]);
    }   

    read_n_lines(argv[1], n);
    
    return 0;
}
