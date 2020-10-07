#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "message.h"
using namespace std;

int main()
{
    MessageBook mb;
    string input;
    while(1) {
        int number;
        string message;
        cin >> input;
        if (input == "add") {
            cin >> number;
            cin.ignore();
            getline(cin, message);
            mb.AddMessage(number, message);
        }
        else if (input == "delete") {
            cin >> number;
            mb.DeleteMessage(number);
        }
        else if (input == "print") {
            cin >> number;
            cout << mb.GetMessage(number) << "\n";
        }
        else if (input == "list") {
            vector <int> v;
            v = mb.GetNumbers();
            for (int i = 0; i < v.size(); i++) {
                cout << v[i] << ": " << mb.GetMessage(v[i]) << "\n";
            }
        }
        else {
            break;
        }
    }

    return 0;
}
