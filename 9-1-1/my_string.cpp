#include <iostream>
#include <string>
#include "my_string.h"
using namespace std;

MyString& MyString::operator=(const MyString& b) {
    str = b.str;
    return *this;
}

MyString MyString::operator+(const MyString& b) {
    return MyString(str + b.str);
}

MyString MyString::operator*(const int b) {
    string s = "";
    for (int i = 0; i < b; i++) {
        s = s + str;
    }
    return MyString(s);
}

ostream& operator<<(ostream& out, MyString& my_string) {
    out << my_string.str << endl;
    return out;
}

istream& operator>>(istream& in, MyString& my_string) {
   in >> my_string.str;
   return in;
}
