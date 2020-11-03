#include <string>
using namespace std;

class Animal {
    public:
        string name;
        int number_of_legs;
        Animal() {}
        virtual string getName() = 0;
        virtual string talk() = 0;
        virtual int getNumLegs() = 0;
};

class Cat: public Animal {
    public:
        Cat(): name("cat"), number_of_legs(4) {}
        virtual string getName();
        virtual string talk();
        virtual int getNumLegs();
};

class Dog: public Animal {
    public:
        Dog(): name("dog"), number_of_legs(4) {}
        virtual string getName();
        virtual string talk();
        virtual int getNumLegs();
};

class Pig: public Animal {
    public:
        Pig(): name("pig"), number_of_legs(4){}
        virtual string getName();
        virtual string talk();
        virtual int getNumLegs(); 
};

class Duck: public Animal {
    public:
        Duck(): name("duck"), number_of_legs(2) {}
        virtual string getName();
        virtual string talk();
        virtual int getNumLegs();
};
