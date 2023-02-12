//
//  8-4.virtual_desctructor.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/12/23.
//

#include <iostream>

using namespace std;

class First2 {
private:
    char* string;
    
public:
    First2(const char* string1) {
        this->string = new char[strlen(string1) + 1];
    }
    
    virtual ~First2() {
        cout << "~First()" << endl;
        delete[] this->string;
    }
};

class Second2 : public First2 {
private:
    char* string2;
    
public:
    Second2(const char* string1, const char* string_) : First2(string1) {
        this->string2 = new char[strlen(string_) + 1];
    }
    
    virtual ~Second2() {
        cout << "~Second()" << endl;
        delete[] this->string2;
    }
};


int main() {
    First2* ptr = new Second2("a", "b");
    delete ptr;
    
    return 0;
}
