#include <iostream>
#include <string>
#include <sstream>
#include "my_clock.h"
using namespace std;

void MyClock::Tick(int seconds) {
    int sec_sum = _hour * 3600 + _min * 60 + _sec;
    seconds = seconds % 86400;
    sec_sum += seconds;
    sec_sum = sec_sum % 86400;
    if (sec_sum < 0) {
        sec_sum = 86400 + sec_sum;
    }
    _hour = sec_sum / 3600;
    sec_sum %= 3600;
    _min = sec_sum / 60;
    _sec = sec_sum % 60;
}

bool MyClock::SetTime(int hour, int minute, int second) {
    if (hour > 23 || hour < 0 || minute > 59 || minute < 0 || second > 59 || second < 0) {
        return false;
    }
    else {
        _hour = hour;
        _min = minute;
        _sec = second;
        return true;
    }
}

int MyClock::hour() const {
    return _hour;
}

int MyClock::minute() const {
    return _min;
}

int MyClock::second() const {
    return _sec;
}

ostream& operator<<(ostream& os, const MyClock& c) {
    os << c.hour() << ":" << c.minute() << ":" << c.second() << endl;
    return os;
}

istream& operator>>(istream& is, MyClock& c) {
    string str, sub_s;
    is >> str;
    istringstream ss(str);
    int s[3];
    int i = 0;
    while (getline(ss, sub_s, ':')) {
       s[i] = stoi(sub_s);
       i++;
    }
    if (!c.SetTime(s[0], s[1], s[2])) {
        cout << "Invalid time: " << str << endl;
    }
    return is;
}
