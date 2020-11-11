#include <iostream>
#include <string>
#include "my_vector.h"
using namespace std;

int main()
{
    int l;
    string str;
    bool q = true;
    cin >> str;
    while(q) 
    {
        if (str == "new") {
            int len;
            string input1, input2, opr;
            cin >> len;
            MyVector A(len),  B(len), output(len);
            cout << "enter a" << endl;
            cin >> A;
            cout << "enter b" << endl;
            cin >> B;
            while(1) {
                cin >> input1;
                if (input1 == "new") {
                    break;
                }
                else if (input1 == "quit") {
                    q = false;
                    break;
                }
                else {
                    cin >> opr;
                    cin >> input2;
                    if (opr == "+") {
                        if (input1 == "a") {
                            if (input2 == "a") {
                                output = A + A;
                            }
                            else if (input2 == "b") {
                                output = A + B;
                            }
                            else {
                                output = A + stoi(input2);
                            }
                        }
                        else {
                            if (input2 == "a") {
                                output = B + A;
                            }
                            else if (input2 == "b") {
                                output = B + B;
                            }
                            else {
                                output = B + stoi(input2);
                            }
                        }
                    }
                    else {
                        if (input1 == "a") {
                            if (input2 == "a") {
                                output = A - A;
                            }
                            else if (input2 == "b") {
                                output = A - B;
                            }
                            else {
                                output = A - stoi(input2);
                            }
                        }
                        else {
                            if (input2 == "a") {
                                output = B - A;
                            }
                            else if (input2 == "b") {
                                output = B - B;
                            }
                            else {
                                output = B - stoi(input2);
                            }
                        }
                    }
                    cout << output;
                }
            }
        }
    }

}
