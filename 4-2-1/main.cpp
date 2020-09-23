#include <iostream>
#include "fighter.h"

using namespace std;

int main(void) {
    Fighter* f1 = new Fighter(10,0);
    Fighter* f2 = new Fighter();
    f2->setHp(10);
    f2->setPower(0);
    f2->setStatus(true);
    
    while(f1->getStats() && f2->getStats()) {
        cout << "F1: " << f1->getHp() << ", " << f1->getPower() << "; F2: " << f2->getHp() << ", " << f2->getPower() << ";\n";
        char Input;
        int f, p;
        cin >> Input;
        if (Input == 'P') {
            cin >> f >> p;
            if (f == 1) {
                f1->emPower(p);
            }
            else {
                f2->emPower(p);
            }
        }
        else if (Input == 'H') {
            cin >> f;
            if (f == 1) {
                f1->hit(f2);
            }
            else {
                f2->hit(f1);
            }
        }
        else if (Input == 'A') {
            cin >> f;
            if (f == 1) {
                f1->attack(f2);
            }
            else {
                f2->attack(f1);
            }
        }
        else {
            break;
        }

        if (f1->getHp() <= 0) {
            f1->setStatus(false);
            cout << "F1: DEAD" << endl;
        }
        else if (f2->getHp() <= 0) {
            f2->setStatus(false);
            cout << "F2: DEAD" << endl;
        }
    }

    delete f1, f2;

    return 0;
}
