#include <iostream>
using namespace std;

int main() {
    cout << "Hello, ";
    cout << "World\n";
    cout << "This is a long "
         << "string that is broken\n\n";

    cout << "Enter an integer: ";
    int num;
    cin >> num;

    cout << "Enter a character: ";
    char c;
    cin >> c;

    cout << "You entered: " << num
         << ", " << c << endl;
    
    return 0;
}
