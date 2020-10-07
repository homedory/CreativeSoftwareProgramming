#include <iostream>
#include <string>
#include <set>
#include "setfunc.h"
using namespace std;

size_t GetOperator(const string& str);

int main()
{
    string s;
    while(1) {
        getline(cin, s);
        if (s == "0") {
            break;
        }
        else {
           size_t p = GetOperator(s);
           set<int> set0, set1, ans_set;
           set0 = parseSet(s.substr(1, p));
           set1 = parseSet(s.substr(p+3,s.size() - p));
           if (s[p] == '+') {
               ans_set = getUnion(set0, set1);
           }
           else if(s[p] == '-') {
               ans_set = getDifference(set0, set1);
           }
           else if (s[p] == '*') {
               ans_set = getIntersection(set0, set1);
           }
           printSet(ans_set);
        }
    }
}

size_t GetOperator(const string& str)
{
    auto op_pos = str.find_first_of("+");
    if(op_pos == string::npos) op_pos = str.find_first_of("*");
    if (op_pos == string::npos) {
        auto temp = str.find_first_of("-");
        while (temp != string::npos && str.at(temp+1) != ' ')
            temp = str.find_first_of("-", temp + 1);
        op_pos = temp;
    }

    return op_pos;
}
