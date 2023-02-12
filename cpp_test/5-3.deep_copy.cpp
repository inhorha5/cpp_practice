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

class Person_5_3{
private:
    char* name;
    int age;

public:
    Person_5_3(const char* name, int age) {
        int len= strlen(name) + 1;
        this->name = new char[len];
        strcpy(this->name, name);
        this->age = age;
    }

    Person_5_3(const Person_5_3& copy) : age(copy.age) {
        this->name = new char[strlen(copy.name) + 1];
        strcpy(this->name, copy.name);
    }
    
    void showPersonInfo() const {
        cout << "name: " << this->name << endl;
        cout << "age: " << this->age << endl;
    }

    ~Person_5_3() {
        delete[] name;
        cout << "Called Destructor!!" << endl;
    }
};

int main_5_3() {
    Person_5_3 person1("James", 20);
    Person_5_3 person2 = person1;
    person1.showPersonInfo();
    person2.showPersonInfo();
    return 0;
}
