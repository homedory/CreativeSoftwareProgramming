#include "shapes.h"

void Circle::setInfo(int x, int y, int r) {
    xCenter = x;
    yCenter = y;
    R = r;
}

float Circle::getArea() {
    return 3.14 * R * R;
}

float Circle::getPerimeter() {
    return 2 * 3.14 * R;
}


void Rectangle::setInfo(int xtl, int ytl, int xbr, int ybr) {
    xTL = xtl;
    yTL = ytl;
    xBR = xbr;
    yBR = ybr;
}

int Rectangle::getArea() {
    return (xBR - xTL) * (yTL - yBR);
}

int Rectangle::getPerimeter() {
    return 2 * (xBR - xTL + yTL - yBR);
}
