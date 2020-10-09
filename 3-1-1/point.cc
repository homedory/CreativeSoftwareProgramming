#include <iostream>

typedef struct {
    int xpos;
    int ypos;
} Point;

Point getScale2xPoint (const Point* p) {
    Point ansP;
    ansP.xpos = 2 * p->xpos;
    ansP.ypos = 2 * p->ypos;
    return ansP;
}

void swapPoints(Point* p1, Point* p2) {
    Point temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    Point p1, p2;
    std::cin >> p1.xpos >> p1.ypos;
    p2 = getScale2xPoint(&p1);
    std::cout << "Calling getScale2xPoint()\n";
    std::cout << "p1 : " << p1.xpos << " " << p1.ypos << "\n";
    std::cout << "p2 : " << p2.xpos << " " << p2.ypos << "\n";
    swapPoints (&p1, &p2);
    std::cout << "Calling swapPoints()\n";
    std::cout << "p1 : " << p1.xpos << " " << p1.ypos << "\n";
    std::cout << "p2 : " << p2.xpos << " " << p2.ypos << "\n";

    return 0;
}
