#include <iostream>
#include <cmath>
using namespace std;

int get_nth_digit(int num, int place);

int main() {
    double num;
    float fnum;
    cout << "Enter a number: ";
    cin >> num;

    // warning may lose precision
//    fnum = round(num + 1);
    int rounded = round(num);
    
    cout << num << "+ 1 rounds to "
         << round(num + 1) << endl;
    
    return 0;
}
