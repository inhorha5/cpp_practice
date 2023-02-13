//
//  8-1.object_pointer.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/13/23.
//

#include <iostream>

using namespace std;


class Person {
public:
    void Sleep() {
        cout << "Sleep" << endl;
    }
};


class Student : public Person {
public:
    void Study() {
        cout << "Study" << endl;
    }
};


class PartTimeStudent : public Student {
public:
    void Work() {
        cout << "Work" << endl;
    }
};


int main_8_1() {
    Person* ptr1 = new Student();
    Person* ptr2 = new PartTimeStudent();
    Student* ptr3 = new PartTimeStudent();
    PartTimeStudent* ptr4 = new PartTimeStudent();

    ptr1->Sleep(); ptr2->Sleep(); ptr3->Study(); ptr4->Work();

    delete ptr1, ptr2, ptr3, ptr4;
    
    return 0;
}
