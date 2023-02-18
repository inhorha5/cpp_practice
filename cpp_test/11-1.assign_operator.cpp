//
//  11-1.assign_operator.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/18/23.
//

#include <iostream>


using namespace std;


class Parent {
private:
    int num1, num2;
    
public:
    Parent(int num1 = 0, int num2 = 0) : num1(num1), num2(num2) {};
    
    void showdata() {
        cout << this->num1 << ", " << this->num2 << endl;
    }
};


class Child {
private:
    int num1, num2;
    
public:
    Child(int num1 = 0, int num2 = 0) : num1(num1), num2(num2) {};
    
    void showData() {
        cout << this->num1 << ", " << this->num2 << endl;
    }
    
    Child& operator=(const Child& ref) {
        cout << "Child& operator=()" << endl;
        this->num1 = ref.num1;
        this->num2 = ref.num2;
        
        return *this;
    }
};


int main() {
    Parent parent(11, 22);
    Parent parent_copy;
    Child child(33, 44);
    Child child_copy;
    
    parent_copy = parent;
    child_copy = child;
    
    parent.showdata(); parent_copy.showdata();
    child.showData(); child_copy.showData();
    
    return 0;
}
