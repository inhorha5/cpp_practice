//
//  7-2.child_class_constructor.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/12/23.
//

#include <iostream>

using namespace std;

class Parent {
private:
    int base_num;

public:
    Parent() : base_num(20) {
        cout << "Parent()" << endl;
    }

    Parent(int n) : base_num(n) {
        cout << "Parent(int n)" << endl;
    }

    void printParentData() {
        cout << this->base_num << endl;
    }
};


class Child : public Parent {
private:
    int child_num;

public:
    Child() : child_num(30) {
        cout << "Child()" << endl;
    }

    Child(int n) : child_num(n) {
        cout << "Child(int n)" << endl;
    }

    Child(int n1, int n2) : Parent(n1), child_num(n2) {
        cout << "Child(int n1, int n2)" << endl;
    }

    void printChildData() {
        printParentData();
        cout << child_num << endl;
    }
};

int main_7_2() {
    cout << "case1.... " << endl;
    Child child1;
    child1.printChildData();
    cout << "------------------" << endl;
    cout << "case2.... " << endl;
    Child child2(12);
    child2.printChildData();
    cout << "------------------" << endl;
    cout << "case3.... " << endl;
    Child child3(23, 24);
    child3.printChildData();

    return 0;
}
