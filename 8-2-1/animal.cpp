#include <string>
#include "animal.h"
using namespace std;

string Cat::getName() {
    return name;
}

string Dog::getName() {
    return name;
}

string Pig::getName() {
    return name;
}

string Duck::getName() {
    return name;
}

string Cat::talk() {
    return "meow";
}

string Dog::talk() {
    return "woof";
}

string Pig::talk() {
    return "oink";
}

string Duck::talk() {
    return "quak";
}

int Cat::getNumLegs() {
    return number_of_legs;
}

int Dog::getNumLegs() {
    return number_of_legs;
}

int Pig::getNumLegs() {
    return number_of_legs;
}

int Duck::getNumLegs() {
    return number_of_legs;
}
