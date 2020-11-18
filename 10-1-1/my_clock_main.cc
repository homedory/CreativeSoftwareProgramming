#include <iostream>
#include <string>
#include "my_clock.h"
using namespace std;


int main()
{
   string inp;
   MyClock clock;
   int sec;
   while(1) {
       cin >> inp;
       if (inp == "set") {
           cin >> clock; 
       }
       else if (inp == "tick") {
           cin >> sec;
           clock.Tick(sec);
       }
       else if (inp == "quit") {
           break;
       }
       else {
           break;
       }
       cout << clock;
   }
}
