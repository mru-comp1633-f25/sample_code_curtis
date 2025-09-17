#include <iostream>
#include <cmath>
using namespace std;

int get_nth_digit(int num, int place);
void some_func();

int main() {
    int num, place;
    cout << "Enter an integer and digit place: ";
    cin >> num >> place;

    int digit = get_nth_digit(num, place);

    cout << "The " << place << " digit is "
         << digit << endl;

    // can't print out void
//    cout << some_func();
    // call the useless function
    some_func();

    return 0;
}

void some_func() {
    // thanks for the indent emacs!
}

int get_nth_digit(int num, int place) {
    // input validation to make sure place and num work
    int divisor = static_cast<int>(pow(10, place-1));
    return (num / divisor) % 10;
}
