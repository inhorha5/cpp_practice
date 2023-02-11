//
//  5-1.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/11/23.
//

#include <iostream>

using namespace std;

class SoSimple {
private:
    int num1;
    int num2;
    
public:
    SoSimple(int n1, int n2) : num1(n1), num2(n2) {};
    SoSimple(SoSimple& copy) : num1(copy.num1), num2(copy.num2) {
        cout << "Called SoSimple(SoSimple& copy)" << endl;
    }
    
    void showSimpledata() {
        cout << this->num1 << endl;
        cout << this->num2 << endl;
    }
};

int main() {
    SoSimple simple1(10,20);
    cout << "생성 및 초기화 직전" << endl;
    SoSimple simple2 = simple1;
    cout << "생성 및 초기화 직후" << endl;
    simple2.showSimpledata();
}
