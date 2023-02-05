//
//  4-7.self_reference.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/5/23.
//

#include <iostream>

using namespace std;

class SelfReference {
private:
    int num;
    
public:
    SelfReference(int n) : num(n) {};
    
    SelfReference& Adder(int n) {
        this->num += n;
        
        return *this;
    }
    
    SelfReference& showTwoNumber() {
        cout << this->num <<endl;
        
        return *this;
    }
};

int main_4_7() {
    SelfReference object(10);
    object.Adder(1).showTwoNumber().Adder(10).showTwoNumber();
    return 0;
}


