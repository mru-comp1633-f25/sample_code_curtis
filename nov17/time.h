#ifndef TIME_H
#define TIME_H
#include <ostream>

class Time {
public:
    Time();
    Time(int h, int m, int s);
    ~Time();
    
    void set(int h, int m, int s);
    void write(std::ostream &out) const;
    void increment();

    bool operator<(const Time &other) const;
    bool operator>(const Time &other) const;
    bool operator==(const Time &other) const;
    //... etc (also <=, >=, !=)
private:
    // <1 if this < other, 0 for equal etc 
    int compare(const Time &other) const;
    
    int hours;
    int minutes;
    int seconds;

    int *dynamic_int;
};

#endif // TIME_H
