#ifndef _MY_VECTOR_H_
#define _MY_VECTOR_H_
class MyVector {
    public:
        MyVector() {};
        MyVector(int length) {
            this->length = length;
            a = new double[length];
        }
        ~MyVector() {
            delete[] a;  
        }

        MyVector& operator=(const MyVector& b);
        MyVector operator+(const MyVector& b);
        MyVector operator-(const MyVector& b);
        MyVector operator+(const int n);
        MyVector operator-(const int n);
        friend std::ostream& operator<< (std::ostream& out, MyVector& b);
        friend std::istream& operator>> (std::istream& in, MyVector& b);

    private:
        int length;
        double *a;
};

#endif
