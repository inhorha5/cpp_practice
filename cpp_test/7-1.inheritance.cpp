//
//  7-1.inheritance.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/11/23.
//

#include <iostream>
#include <cstring>

using namespace std;

class Person {
private:
    int age;
    char name[50];
    
public:
    Person(int age, const char* name) : age(age) {
        strcpy(this->name, name);
    }
    
    void printName() const{
        cout << "My name is " << this->name << endl;
    }
    
    void printAge() const {
        cout << "My age is " << this->age << endl;
    }
};


class UniversityStudent : public Person {
private:
    char major[50];
    
public:
    UniversityStudent(const char* name, int age, const char* major)
    : Person(age, name) {
        strcpy(this->major, major);
    }
    
    void printInformation() const{
        printName();
        printAge();
        cout << "Major is " << this->major << endl << endl;
    }
};



int main_7_1() {
    UniversityStudent student1("James", 20, "Computer Science");
    student1.printInformation();
    
    UniversityStudent student2("Bill", 25, "Computer Engineering");
    student2.printInformation();
    
    return 0;
}
