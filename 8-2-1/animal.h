#include <string>
using namespace std;

class Animal {
    public:
        string name;
        int number_of_legs;
        Animal(string _name, int num_of_legs): name(_name), number_of_legs(num_of_legs) {}
        virtual string getName() = 0;
        virtual string talk() = 0;
        virtual int getNumLegs() = 0;
};

class Cat: public Animal {
    public:
        Cat(): Animal("cat", 4) {}
        virtual string getName();
        virtual string talk();
        virtual int getNumLegs();
};

class Dog: public Animal {
    public:
        Dog(): Animal("dog", 4) {}
        virtual string getName();
        virtual string talk();
        virtual int getNumLegs();
};

class Pig: public Animal {
    public:
        Pig(): Animal("pig", 4) {}
        virtual string getName();
        virtual string talk();
        virtual int getNumLegs(); 
};

class Duck: public Animal {
    public:
        Duck(): Animal("duck", 2) {}
        virtual string getName();
        virtual string talk();
        virtual int getNumLegs();
};
