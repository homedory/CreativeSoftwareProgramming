#include <iostream>
#include "my_vector.h"
using namespace std;

MyVector& MyVector::operator=(const MyVector& b) {
   length = b.length;
   for (int i = 0; i < length; i++) {
       a[i] = b.a[i];
   }
   return *this;
}

MyVector MyVector::operator+(const MyVector& b) {
    MyVector v(b.length);
    for (int i = 0; i < length; i++) {
        v.a[i] = a[i] + b.a[i];
    }
    return v;

}

MyVector MyVector::operator-(const MyVector& b) {
    MyVector v(b.length);
    for (int i = 0; i < length; i++) {
        v.a[i] = a[i] - b.a[i];
    }
    return v;
}

MyVector MyVector::operator+(const int n) {
    MyVector v(length);
    for (int i = 0; i < length; i++) {
        v.a[i] = a[i] + n;
    }
    return v;
}

MyVector MyVector::operator-(const int n) {
    MyVector v(length);
    for (int i = 0; i < length; i++) {
        v.a[i] = a[i] - n;
    }
    return v;
}

ostream& operator<< (std::ostream& out, MyVector& b) {
    for (int i = 0; i < b.length; i++) {
        out << b.a[i] << " ";
    }
    cout << endl;
    return out;
}

istream& operator>> (std::istream& in, MyVector& b) {
    for (int i = 0; i < b.length; i++) {
        in >> b.a[i];
    }
    return in;
}
