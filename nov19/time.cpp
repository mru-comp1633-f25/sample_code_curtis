#include "time.h"
#include <iostream>

Time::Time() : hours(12), minutes(0), seconds(0) {
}

// overloaded constructor
Time::Time(int h, int m, int s) {
    set(h, m, s);
}

void Time::set(int h, int m, int s) {
    // error checking etc
    int over = s / 60;
    m += over;
    s -= 60 * over;

    over = m / 60;
    h += over;
    m -= 60 * over;
    
    hours = h;
    minutes = m;
    seconds = s;
}

// void Time::write(std::ostream &out) const {
// //    hours = 12; // can't do this, read-only
//     out << this->hours << ":" << minutes
//         << ":" << seconds;
// }

int Time::compare(const Time &other) const {
    int result = 1;
    // ugly logic, probably a better way to do it
    if (hours < other.hours ||
        (hours == other.hours &&
         minutes < other.minutes) ||
        (hours == other.hours &&
         minutes == other.minutes &&
         seconds < other.seconds)) {
        result = -1;  
    } else if (hours == other.hours &&
             minutes == other.minutes &&
             seconds == other.seconds) {
        result = 0;
    }
    return result;
}
        
bool Time::operator<(const Time &other) const {
    return compare(other) < 0;
}
      
bool Time::operator>(const Time &other) const {
    return compare(other) > 0;
}
       
bool Time::operator==(const Time &other) const {
    return compare(other) == 0;
}

Time Time::operator+(const Time &other) const {
//    const Time *result = this;
    // copy the object, not the pointer
    Time result = *this;
    // could also just create new one
//    Time result;

    // use the clock wrapping already written
    result.set(hours + other.hours,
               minutes + other.minutes,
               seconds + other.seconds);
    return result;
}

// non-member functions
std::ostream &operator<<(std::ostream &out, const Time &t) {
//    t.write(out);
    // if it's a friend, can access variables
    out << t.hours << ":" << t.minutes << ":" << t.seconds;
    return out;
}
