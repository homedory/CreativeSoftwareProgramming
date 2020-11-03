class Shape {
    public:
        double height, width;
        Shape(double _width, double _height) : height(_height), width(_width) {}
        virtual double getArea() = 0;
};

class Triangle: public Shape {
    public:
        Triangle(double _width, double _height) : Shape(_width, _height){}
        virtual double getArea();
};

class Rectangle: public Shape {
    public:
        Rectangle(double _width, double _height) : Shape(_width, _height) {}
        virtual double getArea();
};
