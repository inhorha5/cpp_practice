//
//  6-1.const_object.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/11/23.
//

#include <iostream>

using namespace std;

class SoSimple{
private:
    int num;
    
public:
    SoSimple(int n) : num(n) {};
    SoSimple addNum(int n) {
        this-> num += n;
        
        return *this;
    }
    
    void showData() const {
        cout << "num: " << this->num << endl;
    }
};

int main_6_1() {
    const SoSimple obj(10);
//    obj.addNum(10);
    obj.showData();
    
    return 0;
}

