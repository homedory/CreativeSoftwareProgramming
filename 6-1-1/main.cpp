#include <iostream>
#include <string>
#include <vector>
#include "animal.h"
using namespace std;

int main()
{
    vector<Animal*> animals;
    char c;
    string name, favoriteToy;
    int age, numStripes;
    while(1) {
        cin >> c;
        if (c == '0') {
           for (int i = 0; i < animals.size(); i++) {
               animals[i]->printInfo();
               delete animals[i];
           }
           break;
        }
        else if (c == 'z') {
            cin >> name >> age >> numStripes;
            Zebra* temp = new Zebra(name, age, numStripes);
            animals.push_back(temp);
        }
        else if (c == 'c') {
            cin >> name >> age >> favoriteToy;
            Cat* temp = new Cat(name, age, favoriteToy);
            animals.push_back(temp);
        }
    }

    return 0;
}
