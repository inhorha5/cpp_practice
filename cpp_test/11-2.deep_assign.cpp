//
//  11-2.deep_assign.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/18/23.
//

//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;


class Person{
private:
    char* name;
    int age;
    
public:
    Person(const char* name, int age) {
        int len = strlen(name) + 1;
        this->name = new char[len];
        strcpy(this->name, name);
        this->age = age;
    }
    
    Person& operator=(const Person& ref) {
        delete[] name;
        
        int len = strlen(ref.name) + 1;
        this->name = new char[len];
        strcpy(this->name, ref.name);
        this->age = ref.age;
        
        return *this;
    }
    
    void showPersonInformation() const {
        cout << "name: " << this->name << endl;
        cout << "age: " << this->age << endl;
    }
    
    ~Person() {
        delete[] name;
        cout << "called destructor!" << endl;
    }
};


int main_11_2() {
    Person person1("Arika", 20);
    Person person2("Emily", 25);
    
    person2 = person1;
    
    person2.showPersonInformation();
    
    return 0;
}
