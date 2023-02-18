//
//  11-4.initializer.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/18/23.
//

#include <iostream>

using namespace std;


class AAA {
private:
    int num;
    
public:
    AAA(int num = 0) : num(num) {
        cout << "AAA(int n=0)" << endl;
    }
    
    AAA(const AAA& ref) : num(ref.num) {
        cout << "AAA(const AAA& ref)" << endl;
    }
    
    AAA& operator=(const AAA& ref) {
        this->num = ref.num;
        cout << "operator=(const AAA& ref)" << endl;
        
        return *this;
    }
};


class BBB {
private:
    AAA member;
    
public:
    BBB(const AAA& ref) : member(ref) {};
};


class CCC {
private:
    AAA member;
    
public:
    CCC(const AAA& ref) {
        this->member = ref;
    }
};


int main_11_4() {
    AAA object1(12);
    cout << "-------------" << endl;
    BBB object2(object1);
    cout << "-------------" << endl;
    CCC object3(object1);
    
    return 0;
}
