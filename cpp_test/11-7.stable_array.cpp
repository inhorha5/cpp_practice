//
//  11-7.stable_array.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/19/23.
//

#include <iostream>
#include <cstdlib>

using namespace std;


class BoundCheckStableIntArray {
private:
    int* arr;
    int arrLen;

    BoundCheckStableIntArray(const BoundCheckStableIntArray& arr) {}
    BoundCheckStableIntArray& operator=(const BoundCheckStableIntArray& arr){
        return *this;
    }

public:
    BoundCheckStableIntArray(int len) : arrLen(len) {
        this->arr = new int[len];
    }

    int& operator[] (int index) {
        if (index < 0 || index >= this->arrLen) {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }

        return this->arr[index];
    }

    int& operator[] (int index) const{
        if (index < 0 || index >= this->arrLen) {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }

        return this->arr[index];
    }

    int getArrayLength() const {
        return this->arrLen;
    }

    ~BoundCheckStableIntArray() {
        delete[] this->arr;
    }
};


void showAlldataInArray(const BoundCheckStableIntArray& ref) {
    int len = ref.getArrayLength();

    for (int i = 0; i < len; i++)
        cout << ref[i] << endl;
}


int main_11_7() {
    BoundCheckStableIntArray arr(10);

    for (int i = 0; i < 10; i++)
        arr[i] = (i + 1) * 10;

    showAlldataInArray(arr);

    return 0;
}
