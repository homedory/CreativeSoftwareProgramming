class Circle {
    public:
        int xCenter, yCenter, R;
        void setInfo(int x, int y, int r);
        float getArea();
        float getPerimeter();
};

class Rectangle {
    public:
        int xTL, yTL, xBR, yBR;
        void setInfo(int xtl, int ytl, int xbr, int ybr);
        int getArea();
        int getPerimeter();
};
