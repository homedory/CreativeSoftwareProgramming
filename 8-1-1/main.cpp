#include <iostream>
#include <vector>
#include "shape.h"
using namespace std;


int main()
{
    char c;
    double w, h;
    vector <Shape*> arr;
    while(1) {
        cin >> c;
        if (c == 'r') {
            cin >> w >> h;
            arr.push_back(new Rectangle(w,h));
        }
        else if (c == 't') {
            cin >> w >> h;
            arr.push_back(new Triangle(w,h));
        }
        else if (c == '0') {
            for (int i = 0; i < arr.size(); i++) {
                cout << arr[i]->getArea() << endl;
                delete arr[i];
            }
            break;
        }
        else {
            break;
        }
    }

    return 0;
}
