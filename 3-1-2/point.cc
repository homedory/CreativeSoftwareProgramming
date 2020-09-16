#include <iostream>
#include <cmath>

typedef struct {
    int xpos;
    int ypos;
} Point;

double getShortest(const Point* points, int n) {
    double m = sqrt(pow(points[0].xpos - points[1].xpos, 2) + pow(points[0].ypos - points[1].ypos, 2));
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double d = sqrt(pow(points[i].xpos - points[j].xpos, 2) + pow(points[i].ypos - points[j].ypos, 2));
            if (d < m) m = d;
        }
    }
    return m;
}

double getLongest(const Point* points, int n) {
    double M = sqrt(pow(points[0].xpos - points[1].xpos, 2) + pow(points[0].ypos - points[1].ypos, 2));
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double d = sqrt(pow(points[i].xpos - points[j].xpos, 2) + pow(points[i].ypos - points[j].ypos, 2));
            if (d > M) M = d;
        }
    }
    return M;
}

int main()
{
    int n;
    std::cin >> n;
    Point* points = new Point [n];
    for (int i = 0; i < n; i++) {
        std::cin >> points[i].xpos >> points[i].ypos;
    }
    std::cout << std::fixed;
    std::cout.precision(4);
    std::cout << "longest: " << getLongest(points, n) << "\n";
    std::cout << "shortest: " << getShortest(points, n) << "\n";
    delete points;

    return 0;
}
