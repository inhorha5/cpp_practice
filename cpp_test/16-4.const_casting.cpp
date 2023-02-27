//
//  16-4.const_casting.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/25/23.
//

#include <iostream>

using namespace std;

void showString(char* str){
    cout << str << endl;
}

void showAddResult(int& n1, int& n2) {
    cout << n1 + n2 << endl;
}

int main_16_4() {
    const char* name = "Gildong Hong";
    showString(const_cast<char*>(name));
    
    const int& num1 = 100;
    const int& num2 = 100;
    showAddResult(const_cast<int&>(num1), const_cast<int&>(num2));
    
    return 0;
}
