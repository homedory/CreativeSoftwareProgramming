#include <iostream>
#include "shapes.h"

using namespace std;

int main()
{
    char input;
    Circle cir;
    Rectangle rect;
    while(1) {
        cout << "shape?" << endl;
        cin >> input;
        if (input == 'Q') {
            break;
        }
        else if (input == 'C') {
            int x, y, r;
            cin >> x >> y >> r;
            cir.setInfo(x, y, r);
            cout << "area: " << cir.getArea() << ", perimeter: " << cir.getPerimeter() << endl;
        }
        else if (input == 'R') {
            int xtl, ytl, xbr, ybr;
            cin >> xtl >> ytl >> xbr >> ybr;
            rect.setInfo(xtl, ytl, xbr, ybr);
            cout << "area: " << rect.getArea() << ", perimeter: " << rect.getPerimeter() << endl;
        }
    }

    return 0;
}
