#include <iostream>
#include "canvas.h"
using namespace std;

void Canvas::Resize(size_t w, size_t h) {
    col = w;
    row = h;
}

bool Canvas::DrawPixel(const int x,const int y,const char brush) {
   if (x < 0 || x >= this->col || y < 0 || y >= this->row) return false;
   
   this->canvas[y][x] = brush;
   return true;
}

void Canvas::Print() {
    cout << " ";
    for (int i = 0; i < col; i++) cout << i % 10;
    cout << endl;
    for (int i = 0; i < row; i++) {
        cout << i % 10;
        for (int j = 0; j < col; j++) {
            cout << canvas[i][j];
        }
        cout << endl;
    }
}

void Canvas::Clear() {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            canvas[i][j] = '.';
        }
    }
}

void Rectangle::Draw(Canvas* canvas) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            canvas->DrawPixel(tlX + j, tlY + i, brush);
        }
    }
}

void Rectangle::PrintInfo() {
    cout << "rect " << tlX << " " << tlY << " " << width << " " << height << " " << brush << endl;
}

void UpTriangle::Draw(Canvas* canvas) {
    for (int i = 0; i < height; i++) {
        for (int j = -i; j <= i; j++) {
            canvas->DrawPixel(tcX + j, tcY + i, brush);
        }
    }

}

void UpTriangle::PrintInfo() {
    cout << "tri_up " << tcX << " " << tcY << " " << height << " " << brush << endl;
}

void DownTriangle::Draw(Canvas* canvas) {
   for (int i = 0; i < height; i++) {
       for (int j = -i; j <= i; j++) {
           canvas->DrawPixel(bcX + j, bcY - i, brush);
       }
   }
}

void DownTriangle::PrintInfo() {
    cout << "tri_down " << bcX << " " << bcY << " " << height << " " << brush << endl;
}

void Diamond::Draw(Canvas* canvas) {
    for (int i = 0; i < dist; i++) {
        for (int j = -i; j <= i; j++) {
            canvas->DrawPixel(tcX + j, tcY + i, brush);
        }
    }
    for (int i = 0; i < dist - 1; i++) {
        for (int j = - i; j <= i; j++) {
            canvas->DrawPixel(tcX + j , tcY + 2 * dist - 2 - i, brush);
        }
    }
}

void Diamond::PrintInfo() {
    cout << "diamond " << tcX << " " << tcY << " " << dist << " " << brush << endl;
}
