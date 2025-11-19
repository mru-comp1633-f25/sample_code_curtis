#ifndef TIME_H
#define TIME_H
#include <ostream>

class Time {
public:
    Time();
    Time(int h, int m, int s);
    
    void set(int h, int m, int s);
//    void write(std::ostream &out) const;
    void increment();

    bool operator<(const Time &other) const;
    bool operator>(const Time &other) const;
    bool operator==(const Time &other) const;
    //... etc (also <=, >=, !=)

    // add two time objects together
    Time operator+(const Time &other) const;

    // friend function for stream operator
    friend std::ostream &operator<<(std::ostream &out, const Time &t);
    
private:
    // <1 if this < other, 0 for equal etc 
    int compare(const Time &other) const;
    
    int hours;
    int minutes;
    int seconds;

    int *dynamic_int;
};

// standalone stream operator, needs to call public member function
//std::ostream &operator<<(std::ostream &out, const Time &t);

#endif // TIME_H
