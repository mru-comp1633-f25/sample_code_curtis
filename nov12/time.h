#ifndef TIME_H
#define TIME_H
#include <ostream>

class Time {
public:
    void set(int h, int m, int s);
    void write(std::ostream &out);
    int compare(Time other);
    void increment();
private:
    int hours;
    int minutes;
    int seconds;
};

#endif // TIME_H
