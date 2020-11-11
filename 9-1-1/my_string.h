#ifndef _STRING_H_
#define _STRING_H_

#include <string>

class MyString
{
    public:
        MyString() {}
        MyString(std::string s) {
            str = s; 
        }
        MyString& operator=(const MyString& b);
        MyString operator+(const MyString& b);
        MyString operator*(const int b);
        friend std::ostream& operator<<(std::ostream& out, MyString& my_string);
        friend std::istream& operator>>(std::istream& in, MyString& my_string);

    private:
        std::string str;
};

#endif


