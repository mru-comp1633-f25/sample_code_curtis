#include <iostream>
#include <cmath>
using namespace std;

const double GST = 0.05;
int x = 5; // bad, global variable bad

int main() {
    cout << "GST: " << GST << endl;
//    GST = 0; // no can do, is const
    cout << "GST: " << GST << endl;

    cout << "Enter a number: ";
    double num;
    cin >> num;

    int whole_num = static_cast<int>(round(num));
    
    cout << num << " + 1 rounds to "
         << round(num + 1) << endl;
    return 0;
}
