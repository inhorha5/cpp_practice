//
//  6-3.static_members.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/11/23.
//

#include <iostream>

using namespace std;

class SoSimple{
private:
    static int simpleObjectCount;
    
public:
    SoSimple() {
        this-> simpleObjectCount++;
        cout << this->simpleObjectCount << endl;
    }
};

int SoSimple::simpleObjectCount = 0;

class SoComplex {
private:
    static int complexObjectCount;
    
public:
    SoComplex() {
        this-> complexObjectCount++;
        cout << this-> complexObjectCount << "SoComplex Called" << endl;
    }
    SoComplex(SoComplex& copy) {
        this->complexObjectCount++;
        cout << this->complexObjectCount << " SoComplex Called (copy)" << endl;
    }
    int getNum() {
        return this->complexObjectCount;
    }
};

int SoComplex::complexObjectCount = 0;

int main_6_3(){
    SoSimple simple1, simple2;
    SoComplex complex1, complex2 = complex1;
    SoComplex();
    
    cout << "num of complex: " << complex1.getNum() << endl;
    
    return 0;
}
