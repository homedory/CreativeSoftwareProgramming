#include <iostream>
#include <string>
#include <set>
#include <sstream>
#include "setfunc.h"
using namespace std;

set<int> parseSet(const std::string& str) {
   set<int> set0;
   stringstream ss(str);
   string temp;
   int n;
   while (ss>>temp) {
       if(stringstream(temp) >> n) {
            set0.insert(n);
       }
   }
   return set0;
}

void printSet(const std::set<int>& set0) {
    set<int>::iterator it;
    cout << "{ ";
    for(it = set0.begin(); it != set0.end(); it++) {
        cout << *it << " ";
    }
    cout << "}\n";
}

set<int> getIntersection(const set<int>& set0, const set<int>& set1) {
    set<int>::iterator it1 , it2;
    set<int> ans;
    for (it1 = set0.begin(); it1 != set0.end(); it1++) {
        for (it2 = set1.begin(); it2 != set1.end(); it2++) {
            if (*it1 == *it2) ans.insert(*it1);
        }
    }
    return ans;
}

set<int> getUnion(const set<int>& set0, const set<int>& set1) {
    set<int>::iterator it;
    set<int> ans = set0;
    for (it = set1.begin(); it != set1.end(); it++) {
        ans.insert(*it);
    }
    return ans;
}

set<int> getDifference(const set<int>& set0, const set<int>& set1) {
    set<int>::iterator it;
    set<int> ans = set0;
    for (it = set1.begin(); it != set1.end(); it++) {
        ans.erase(*it);
    }
    return ans;
}
