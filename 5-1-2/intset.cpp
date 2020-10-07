#include <vector>
#include <algorithm>
#include "intset.h"

void IntegerSet::AddNumber(int num) {
    for (int i = 0; i < numbers_.size(); i++) {
        if (numbers_[i] == num) return;
    }
    numbers_.push_back(num);
    sort(numbers_.begin(), numbers_.end());
}

void IntegerSet::DeleteNumber(int num) {
    for (int i = 0; i < numbers_.size(); i++) {
        if (numbers_[i] == num) {
            numbers_.erase(numbers_.begin() + i);
        }
    }
}

int IntegerSet::GetItem(int pos) {
    if (pos >= numbers_.size() || pos < 0) return -1;
    return numbers_[pos];
}

std::vector<int> IntegerSet::GetAll() {
    return numbers_;
}
