#include "mylib.h"
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; ++i) {
        cout << "arg " << i << ": " << argv[i] << endl;
    }

    if (argc < 2) {
        cout << "Usage: " << argv[0] << " <filename>\n";
        return 1;
    }
    
//    build_name();
    // assume at least two args
    read_from_file(argv[1]);
    return 0;
}
