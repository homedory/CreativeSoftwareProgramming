#include "accounts.h"
#include <iostream>

using namespace std;

void Account::setInfo(int _id, int _balance) {
    id = _id;
    balance = _balance;
}

void AccountManager::NewAccount() {
    if (accounts_num >= 10) {
        cout << "Failure!" << endl;
    }
    else { 
        accounts[accounts_num].setInfo(accounts_num, 0); 
        cout << "Success!\nBalance of user " << accounts_num << ": " << accounts[accounts_num].balance << endl;
        accounts_num += 1;
    }
}
void AccountManager::deposit(int id, int amount) {
    if (accounts[id].balance + amount > 1000000) {
        cout << "Failure!" << endl;
    }
    else { 
        accounts[id].balance += amount;
        cout << "Success!" << endl;
    }
}

void AccountManager::withdraw(int id, int amount) {
    if (accounts[id].balance - amount < 0) {
        cout << "Failure!" << endl;
    }
    else {
        accounts[id].balance -= amount;
        cout << "Success!" << endl;
    }
}

void AccountManager::transfer(int from, int to, int amount) { 
    if (accounts[from].balance - amount < 0 || accounts[to].balance + amount > 1000000) {
        cout << "Failure!" << endl;
    }
    else { 
        accounts[from].balance -= amount;
        accounts[to].balance += amount;
        cout << "Success!" << endl;
    }
}

void AccountManager::checkBalance(int id) {
    cout << "Balance of user " << id << ": " << accounts[id].balance << endl;
}
