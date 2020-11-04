#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "animal.h"
using namespace std;

int main()
{
   vector <Animal*> animals;
   string s;
   int numCat = 0, numDog = 0, numPig = 0, numDuck = 0, numLegs = 0;
   
   getline(cin, s);
   istringstream iss(s);
   for (string s; iss >> s; ) {
       if (s == "cat") {
           animals.push_back(new Cat);
           numCat++;
       }
       else if (s == "dog") {
           animals.push_back(new Dog);
           numDog++;
       }
       else if (s == "pig") {
           animals.push_back(new Pig);
           numPig++;
       }
       else if (s == "duck") {
           animals.push_back(new Duck);
           numDuck++;
       }
   }

   for (int i = 0; i < animals.size(); i++) {
      cout << animals[i]->talk() << " ";
      numLegs += animals[i]->getNumLegs();
      delete animals[i];
   }
   cout << endl;
   cout << "We have ";
   if (numCat >= 2) cout << numCat << " cats, ";
   else cout << numCat << " cat, ";

   if (numDog >= 2) cout << numDog << " dogs, ";
   else cout << numDog << " dog, ";

   if (numPig >= 2) cout << numPig << " pigs, ";
   else cout << numPig << " pig, ";

   if (numDuck >= 2) cout << "and " << numDuck << " ducks.\n";
   else cout << "and " << numDuck << " duck.\n";

   cout << "They have " << numLegs << " legs.\n";
    
   return 0;
}
