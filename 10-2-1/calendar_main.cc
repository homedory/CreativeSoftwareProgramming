#include <iostream>
#include <string>
#include "calendar.h"
using namespace std;

int main()
{
    string input;
    MyCalendar calendar;
    while(1) {
        cin >> input;
        if (input == "set") {
            cin >> calendar;
        }
        else if (input == "next") {
            string str;
            cin >> str;
            if (str == "day") {
                calendar.NextDay();
            }
            else {
                calendar.NextDay(stoi(str));
            }
        }
        else if (input == "quit") {
            break;
        }
        else {
            break;
        }

        cout << calendar;
    }
}
