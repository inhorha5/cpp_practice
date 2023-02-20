//
//  11-11.type_cast.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/19/23.
//

#include <iostream>

using namespace std;


class Number2 {
private:
    int num;
    
public:
    Number2(int n = 0) : num(n) {
        cout << "Number(int n=0)" << endl;
    }
    
    Number2& operator=(const Number2& ref) {
        cout << "operator=()" << endl;
        this->num = ref.num;
        
        return *this;
    }
    
    operator int() {
        cout << "type cast" << endl;
        
        return num;
    }
    
    void showNumber() {
        cout << this->num << endl;
    }
};


int main_11_11() {
    Number2 num1;
    num1 = 30;
    
    Number2 num2 = num1 + 20;
    num2.showNumber();
    
    return 0;
}
