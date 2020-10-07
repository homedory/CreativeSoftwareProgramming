#include "sorted.h"
#include <algorithm>
#include <vector>
using namespace std;

void SortedArray::AddNumber(int num) {
    numbers_.push_back(num);
}

std::vector<int> SortedArray::GetSortedAscending() {
    sort(numbers_.begin(), numbers_.end());
    return numbers_;
}

bool descending(int a, int b) {
    return a > b;
}

std::vector<int> SortedArray::GetSortedDescending() {
    sort(numbers_.begin(), numbers_.end(), descending);
    return numbers_;
}

int SortedArray::GetMax() {
    return *max_element(numbers_.begin(), numbers_.end());
}

int SortedArray::GetMin() {
    return *min_element(numbers_.begin(), numbers_.end());
}


