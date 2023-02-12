//
//  6-4.public_static_members.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/11/23.
//

#include <iostream>

using namespace std;

class SoSimple2 {
public:
    static int simpleObjectCount;
    
public:
    SoSimple2() {
        this->simpleObjectCount++;
    }
};
int SoSimple2::simpleObjectCount = 0;

int main_6_4() {
    cout << SoSimple2::simpleObjectCount << " SoSimple exists" << endl;
    SoSimple2 simple1;
    SoSimple2 simple2;
    
    cout << SoSimple2::simpleObjectCount << " SoSimples exist" << endl;
    cout << simple1.simpleObjectCount << " SoSimples exist" << endl;
    cout << simple2.simpleObjectCount << " SoSimples exist" << endl;
    
    return 0;
}
