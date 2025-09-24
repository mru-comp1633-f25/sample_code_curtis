#include <iostream>
using namespace std;

int main() {
    char c = 'a';
    int x = 'z';
    double y;

    y = x;
    x = static_cast<int>(y);
    c = static_cast<char>(x);

    cout << "c = " << c
         << "\nx = " << x
         << "\ny = " << y << endl;

    int i = 2147483647;
    i = i + 1;
    cout << i << endl; // ?

    double a_round_double = 8.0;

    cout << "8: " << a_round_double << endl;
    
    return 0;
}
