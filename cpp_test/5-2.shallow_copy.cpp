//
//  5-2.shallow_copy.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/11/23.
//
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;


class Person_5_2 {
private:
    char* name;
    int age;

public:
    Person_5_2(const char* name, int age) {
        int len = strlen(name) + 1;
        this->name = new char[len];
        strcpy(this->name, name);
        this->age = age;
    }

    void showPersonInfo() const {
        cout << "name: " << this->name << endl;
        cout << "age: " << this->age << endl;
    }
    
    ~Person_5_2() {
        delete[] name;
        cout << "Called Destructor!!" << endl;
    }
};

int main_5_2() {
    Person_5_2 person1("James", 20);
    Person_5_2 person2 = person1;
    person1.showPersonInfo();
    person2.showPersonInfo();
    
    return 0;
}
