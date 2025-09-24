#include <iostream>
#include <cmath>
using namespace std;

int get_digit(int num, int place);
void a_void_func();

int main() {
    int num, place;
    cout << "Enter an integer and place: ";
    cin >> num >> place;

    int digit = get_digit(num, place);
    a_void_func();

    cout << "The " << place << " digit is "
         << digit << endl;
    return 0;
}

void a_void_func() {
    cout << "Void!\n";
}

int get_digit(int num, int place) {
    // input validation to make sure place is good etc
    int divisor = static_cast<int>(pow(10, place - 1));
    return (num / divisor) % 10;
}
