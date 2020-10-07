#include <map>
#include <string>
#include <vector>
#include "message.h"
using namespace std;

MessageBook::MessageBook() {

}

MessageBook::~MessageBook() {

}

void MessageBook::AddMessage(int number, const string& message) {
    map<int, string>::iterator it;
    it = messages_.find(number);
    if (it != messages_.end()) {
        it->second = message;
    }
    else {
         messages_.insert(make_pair(number, message));
    }
}

void MessageBook::DeleteMessage(int number) {
    map<int, string>::iterator it;
    it = messages_.find(number);
    if (it != messages_.end()) {
        messages_.erase(it);
    }
}

vector<int> MessageBook::GetNumbers() {
    vector<int> v;
    map<int, string>::iterator it;
    for (it = messages_.begin(); it != messages_.end(); it++) {
        v.push_back(it->first);
    }
    return v;
}

const string& MessageBook::GetMessage(int number) {
    map<int, string>::iterator it;
    it = messages_.find(number);
    if (it != messages_.end()) {
        return it->second;
    }
    else {
        return s;
    }
}
