#include <iostream>
#include "accounts.h"

using namespace std;

int main()
{
    char Input;
    AccountManager AccManager;
    while(1) {
        cout << "Job?" << endl;
        cin >> Input;
        if (Input == 'N') {
            AccManager.NewAccount();
        }
        else if (Input == 'D') {
            int id, amount;
            cin >> id >> amount;
            if (id >= AccManager.accounts_num) {
                cout << "Failure!" << endl;
            }
            else { 
                AccManager.deposit(id, amount);
                AccManager.checkBalance(id);
            }
        }
        else if (Input == 'W') {
            int id, amount;
            cin >> id >> amount;
            if (id >= AccManager.accounts_num) {
                cout << "Failure!" << endl;
            }
            else {
                AccManager.withdraw(id, amount);
                AccManager.checkBalance(id);
            }
        }
        else if (Input == 'T') {
            int from, to, amount;
            cin >> from >> to >> amount;
            if (from >= AccManager.accounts_num || to >= AccManager.accounts_num) {
                cout << "Failure!" << endl;
            }
            else {
                AccManager.transfer(from, to, amount);
                if (from > to) {
                    int temp = from;
                    from = to;
                    to = temp;
                }
                AccManager.checkBalance(from);
                AccManager.checkBalance(to);
            } 
        }
        else {
            break;
        }
    }

    return 0;
}
