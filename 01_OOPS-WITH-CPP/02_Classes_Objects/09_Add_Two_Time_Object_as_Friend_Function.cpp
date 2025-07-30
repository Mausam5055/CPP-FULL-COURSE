#include <iostream>
using namespace std;

class Time {
    int hours;
    int minutes;
    int seconds;

public:
    // Input function
    void input(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Output function
    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Declare friend function
    friend Time addTime(Time t1, Time t2);
};

// Friend function to add two Time objects
Time addTime(Time t1, Time t2) {
    Time temp;

    temp.seconds = t1.seconds + t2.seconds;
    temp.minutes = t1.minutes + t2.minutes;
    temp.hours = t1.hours + t2.hours;

    // Adjust seconds to minutes
    if (temp.seconds >= 60) {
        temp.seconds -= 60;
        temp.minutes++;
    }

    // Adjust minutes to hours
    if (temp.minutes >= 60) {
        temp.minutes -= 60;
        temp.hours++;
    }

    return temp;
}

int main() {
    Time t1, t2, result;

    // Set times
    t1.input(2, 45, 50);  // 2:45:50
}