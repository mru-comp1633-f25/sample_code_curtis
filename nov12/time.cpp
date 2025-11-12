#include "time.h"

void Time::set(int h, int m, int s) {
    // error checking etc
    hours = h;
    minutes = m;
    seconds = s;
}

void Time::write(std::ostream &out) {
    out << "this: " << this << std::endl;
    out << this->hours << ":" << minutes
        << ":" << seconds;
}
