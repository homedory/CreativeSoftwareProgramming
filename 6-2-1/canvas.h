class Canvas {
    public:
        Canvas(size_t width, size_t height) {
            col = width;
            row = height;
        }
        ~Canvas() {};
        void Resize(size_t w, size_t h);
        bool DrawPixel(const int x,const int y,const char brush);
        void Print();
        void Clear();
    private:
        size_t col, row;
        char canvas[1000][1000];
};

class Shape {
    public:
        virtual ~Shape(){};
        virtual void Draw(Canvas* canvas) {};
        virtual void PrintInfo() {};
    protected:
        char brush;
};

class Rectangle : public Shape {
    public:
        int tlX, tlY, width, height;
        Rectangle(int x, int y, int w, int h, char b) {
            tlX = x;
            tlY = y;
            width = w;
            height = h;
            brush = b;
        }
        virtual void Draw(Canvas* canvas);
        virtual void PrintInfo();
};

class UpTriangle : public Shape {
    public:
        int tcX, tcY, height;
        UpTriangle(int x, int y, int h, char b) {
            tcX = x;
            tcY = y;
            height = h;
            brush = b;
        }
        virtual void Draw(Canvas* canvas);
        virtual void PrintInfo();
};

class DownTriangle : public Shape {
    public:
        int bcX, bcY, height;
        DownTriangle(int x, int y, int h, char b) {
            bcX = x;
            bcY = y;
            height = h;
            brush = b;
        }
        virtual void Draw(Canvas* canvas);
        virtual void PrintInfo();
};

class Diamond : public Shape {
    public:
        int tcX, tcY, dist;
        Diamond(int x, int y, int d, char b) {
            tcX = x;
            tcY = y;
            dist = d;
            brush = b;
        }
        virtual void Draw(Canvas* canvas);
        virtual void PrintInfo();
};
