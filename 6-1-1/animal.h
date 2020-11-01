#include <string>
using namespace std;

class Animal {
    public: 
        Animal(string _name, int _age) {
            name = _name;
            age = _age;
        }
        virtual void printInfo() {};
    protected:
        string name;
        int age;
};

class Zebra: public Animal {
    public:
        Zebra(string _name, int _age, int _numStripes): Animal(_name, _age) {
            numStripes = _numStripes;
        }
        virtual void printInfo();
    private:
        int numStripes;
};

class Cat: public Animal {
    public:
        Cat(string _name, int _age, string _favoriteToy): Animal(_name , _age) {
            favoriteToy = _favoriteToy;
        }
        virtual void printInfo();
    private:
        string favoriteToy;
};
