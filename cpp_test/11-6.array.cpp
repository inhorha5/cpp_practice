//
//  11-6.array.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/19/23.
//

#include <iostream>

using namespace std;


class BoundCheckIntArray {
private:
    int* arr;
    int arrLen;
    
public:
    BoundCheckIntArray(int len) : arrLen(len) {
        this->arr = new int[len];
    }
    
    int& operator[] (int index) {
        if(index < 0 || index >= this->arrLen) {
            cout << "Array index out of bound" << endl;
        }
        
        return this->arr[index];
    }
    
    ~BoundCheckIntArray() {
        delete[] this->arr;
    }
};


int main_11_6() {
    BoundCheckIntArray arr(10);
    
    for (int i = 0; i < 10; i++) {
        arr[i] = (i + 1) * 10;
    }
    
    for (int i = 0; i < 12; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}
