#include <iostream>
using namespace std;

int main() {
    char c = '6';
    int c_i = 300;
    double c_d = c_i;
    c = static_cast<char>(c_i);

    cout << c << " is " << c_i
         << " and " << c_d << endl;

    bool same = (3 * 0.1) == 0.3;
    cout << "3 * 0.1 == 0.3: " << same << endl;

    int i = 2147483647;
    i = i + 1;
    cout << i << endl; // ?
    
    return 0;
}
