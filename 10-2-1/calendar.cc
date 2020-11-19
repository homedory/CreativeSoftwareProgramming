#include <iostream>
#include <string>
#include <sstream>
#include "calendar.h"
using namespace std;

void MyCalendar::NextDay(int n) {
   int y, m, d;
   y = _year;
   m = _month;
   d = _day;
   int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   int leap_month_days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   if (n < 0) { 
       int temp = n * (-1);
       int s = ComputeDaysFromYearStart(y, m, d);
       while (temp >= s) {
           y--;
           s += GetDaysInYear(y);
       }
       n = s - temp - 1;
       m = 1;
       d = 1;
   }

   if (GetDaysInYear(y) - ComputeDaysFromYearStart(y,m,d) < n) {
       n -= (GetDaysInYear(y) - ComputeDaysFromYearStart(y,m,d)) + 1;
       y++;
       m = 1;
       d = 1;
       }
    while (n >= GetDaysInYear(y)) {
           n -= GetDaysInYear(y);
           y++;
    }
    if (GetDaysInYear(y) == 365) {
        if (month_days[m-1] - d < n) {
            n -= (month_days[m-1] - d) + 1;
            m++;
            d = 1;
        }
        while (n >= month_days[m-1]) {
            n -= month_days[m-1];
            m++;
        }
        d += n;
     }
    else {
        if (leap_month_days[m-1] - d < n) {
            n -= (leap_month_days[m-1] - d) + 1;
            m++;
            d = 1;
        }
        while (n >= leap_month_days[m-1]) {
            n -= leap_month_days[m-1];
            m++;
        }
        d += n;
    }
    if (!this->SetDate(y, m, d)) {
        cout << "Invalid date" << endl;
    }
}

bool MyCalendar::SetDate(int year, int month, int day) {
    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year < 0 || year > 9999 || month < 1 || month > 12 || day < 1) {
        return false;
    }
    else if (GetDaysInYear(year) == 365) {
        if (month_days[month-1] < day)
            return false;
    }
    else if (GetDaysInYear(year) == 366) {
        month_days[1] += 1;
        if (month_days[month-1] < day)
            return false;
    }
    _year = year;
    _month = month;
    _day = day;
    return true; 
}

int MyCalendar::year() const {
    return _year;
}

int MyCalendar::month() const {
    return _month;
}

int MyCalendar::day() const {
    return _day;
}

int MyCalendar::GetDaysInYear(int year) {
    if (year % 400 == 0) {
        return 366;
    }
    else if (year % 100 == 0) {
        return 365;
    }
    else if (year % 4 == 0) {
        return 366;
    }
    else {
        return 365;
    }
}

int MyCalendar::ComputeDaysFromYearStart(int year, int month, int day) {
    int days_sum[12] = {0, 31, 59, 90, 120, 151, 182, 212, 243, 273, 304, 334};
    int leap_days_sum[12] = {0, 31, 60, 91, 121, 152, 183, 213, 244, 274, 305, 336};
    if (GetDaysInYear(year) == 365) {
        return days_sum[month-1] + day;
    }
    else {
        return leap_days_sum[month-1] + day;
    }
}

ostream& operator<<(ostream& os, const MyCalendar& c) {
    os << c.year() << "." << c.month() << "." << c.day() << endl;
    return os;
}

istream& operator>>(istream& is, MyCalendar& c) {
    int d[3];
    string str, sub_s;
    is >> str;
    istringstream ss(str);
    int i = 0;
    while(getline(ss, sub_s, '.')) {
        d[i] = stoi(sub_s);
        i++;
    }
    if (!c.SetDate(d[0], d[1], d[2])) {
        cout << "Invalid Date: " << str << endl;
    }
    return is;
}
