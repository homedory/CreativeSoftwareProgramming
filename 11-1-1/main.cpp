#include <iostream>
#include <string>
#include "my_container.h"
using namespace std;

int main()
{
    int size_int, size_double, size_str;

    cin >> size_int;
    MyContainer <int> arr_int(size_int);
    cin >> arr_int;
    cout << arr_int;

    cin >> size_double;
    MyContainer <double> arr_double(size_double);
    cin >> arr_double;
    cout << arr_double;

    cin >> size_str;
    MyContainer <string> arr_str(size_str);
    cin >> arr_str;
    cout << arr_str;

    return 0;
}
