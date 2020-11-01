#include <iostream>
#include <vector>
#include <string>
#include "canvas.h"
using namespace std;

int main()
{
    vector <Shape*> shapes;
    string cmd, shape;
    size_t w, h;
    cin >> cmd >> w >> h;
    Canvas canvas(w, h);
    canvas.Clear();
    canvas.Print();
    while (1) {
        int x, y, w, h, d;
        char brush;
        cin >> cmd;
        if (cmd == "add") {
            cin >> shape;
            if (shape == "rect") {
               cin >> x >> y >> w >> h >> brush;
               Rectangle* temp = new Rectangle(x, y, w, h, brush);
               shapes.push_back(temp);
            }
            else if (shape == "tri_up") {
                cin >> x >> y >> h >> brush;
                UpTriangle* temp = new UpTriangle(x, y, h, brush);
                shapes.push_back(temp);
            }
            else if (shape == "tri_down") {
                cin >> x >> y >> h >> brush;
                DownTriangle* temp = new DownTriangle(x, y, h, brush);
                shapes.push_back(temp);
            }
            else if (shape == "diamond") {
                cin >> x >> y >> d >> brush;
                Diamond* temp = new Diamond(x, y, d, brush);
                shapes.push_back(temp);
            }
        }
        else if (cmd == "delete") {
            int idx;
            cin >> idx;
            if (idx < shapes.size()) {
                delete shapes[idx];
                shapes.erase(shapes.begin() + idx);
            }
        }
        else if (cmd == "draw") {
            canvas.Clear();
            for (int i = 0; i < shapes.size(); i++) {
                shapes[i]->Draw(&canvas);
            }
            canvas.Print();
            canvas.Clear();
        }
        else if (cmd == "dump") {
            for (int i = 0; i < shapes.size(); i++) {
                cout << i << " ";
                shapes[i]->PrintInfo();
            }
        }
        else if (cmd == "resize") {
            size_t nw, nh;
            cin >> nw >> nh;
            canvas.Resize(nw, nh);
        }
        else if (cmd == "quit") {
            for (int i = 0; i < shapes.size(); i++) {
                delete shapes[i];
            }
            break;
        }
        else {
            break;
        }
    }
    
    return 0;
}
