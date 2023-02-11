////
////  4-5.desturctor.cpp
////  cpp_test
////
////  Created by InHo Rha on 2/5/23.
////
//
//#include <iostream>
//
//using namespace std;
//
//class Person {
//private:
//    char* name;
//    int age;
//    
//public:
//    Person(const char* name, int age){
//        int len = strlen(name) + 1;
//        this->name = new char[len];
//        strcpy(this->name, name);
//        this->age = age;
//    }
//    
//    void showPersonInfo() const {
//        cout << "name: " << this->name << endl;
//        cout << "age: " << this->age << endl;
//    }
//    
//    ~Person() {
//        delete[] this->name;
//        cout << "Called Destructor!" << endl;
//    }
//};
//
//int main_4_5() {
//    Person man1("James", 30);
//    Person man2("Bill", 20);
//    man1.showPersonInfo();
//    man2.showPersonInfo();
//    return 0;
//}
