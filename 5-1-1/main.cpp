#include <iostream>
#include <vector>
#include <string>
#include "sorted.h"
using namespace std;

int main()
{
    string s;
    SortedArray arr;
    while(s != "quit") {
        cin >> s;
        if (s == "add") {
            int n;
            do {
                cin >> n;
                arr.AddNumber(n);
            } while(getc(stdin) == ' ');
        }
        else if (s == "ascend") {
            vector <int> v;
            v = arr.GetSortedAscending();
            for(int i = 0; i < v.size(); i++) {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
        else if (s == "descend") {
            vector <int> v;
            v = arr.GetSortedDescending();
            for (int i = 0; i < v.size(); i++) {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
        else if (s == "max") {
            cout << arr.GetMax() << "\n";
        }
        else if (s == "min") {
            cout << arr.GetMin() << "\n";
        }
    }

    return 0;
}

