//
//  11-10.pointer.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/19/23.
//

#include <iostream>

using namespace std;


class Number {
private:
    int num;
    
public:
    Number(int n) : num(n) {}
    
    void showData() {
        cout << this->num << endl;
    }
    
    Number* operator->() {
        cout << "overloaded arror operator" << endl;
        return this;
    }
    
    Number& operator*() {
        cout << "overloaded asterisk" << endl;
        return *this;
    }
};


int main_11_10() {
    Number num(20);
    num.showData();
    
    (*num) = 30;
    num->showData();
    (*num).showData();
    
    return 0;
}
