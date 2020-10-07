#include <iostream>
#include <vector>
#include <string>
#include "intset.h"
using namespace std;

int main()
{
    IntegerSet S;
    string input;
    int n;
    while(1) {
        vector <int> v;
        cin >> input;
        if (input == "quit") break;
        cin >> n;
        if (input == "add") {
            S.AddNumber(n);
            v = S.GetAll();
            for (int i = 0; i < v.size(); i++) {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
        else if (input == "del") {
            S.DeleteNumber(n);
            v = S.GetAll();
            for (int i = 0; i < v.size(); i++) {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
        else if (input == "get") {
            cout << S.GetItem(n) << "\n";
        }
    }

    return 0;
}
