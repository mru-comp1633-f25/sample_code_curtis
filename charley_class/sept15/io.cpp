#include <iostream>
using namespace std;

void weird_x() {
  int x;
  cout << "x = " << x << endl;
}

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    char c;
    cout << "Enter a character: ";
    cin >> c;
    
    // print(x)
//    cin >> x;
    cout << "x = " << x << endl
         << "c = " << c << endl;    
    
    cout << "Whatever\n"
         << "The same "
         << "line\n"
         << "A number: "
         << 5 << endl;
    
    return 0;
}
