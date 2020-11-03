#include <iostream>
#include <string>
#include <vector>
#include "animal.h"
using namespace std;

int main()
{
   vector <Animal*> animals;
   int numCat = 0, numDog = 0, numPig = 0, numDuck = 0, numLegs = 0;

   // input

   for (int i = 0; i < animals.size(); i++) {
      cout << Animals[i]->talk() << " ";
      delete Animals[i];
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
