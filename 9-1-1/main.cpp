#include <iostream>
#include <string>
#include "my_string.h"
using namespace std;

int main() 
{
    string str;
    cin >> str;
    bool q = true;
    while(q) {
        if (str == "new") {
            string input1, input2, opr;
            int num;
            MyString a, b, output;
            cout << "enter a" << endl;
            cin >> a;
            cout << "enter b" << endl;
            cin >> b;
            while(1) {
                cin >> input1;
                if (input1 == "quit") {
                    q = false;
                    break;
                }
                else if (input1 == "new") {
                    break;
                }
                else {
                    cin >> opr;
                    if (opr == "*") {
                        cin >> num;
                        if (input1 == "a") {
                            output = a * num;
                            cout << output;
                        }
                        else {
                            output = b * num;
                            cout << output;
                        }

                    }
                    else {
                        cin >> input2;
                        if (input1 == "a") {
                            if (input2 == "a") {
                                output = a + a;
                            }
                            else {
                                output = a + b;
                            }
                        }
                        else {
                            if (input2 == "a") {
                                output = b + a;
                            }
                            else {
                                output = b + b;
                            }
                        }
                        cout << output;
                    }
                }
            }

        }
        else {
            break;
        }
    }
}
