//
//  13-7.static_variable_in_function_template.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/19/23.
//

#include <iostream>

using namespace std;

template <typename T>
void showStaticValue() {
    static T num = 0;
    num++;
    cout << num << endl;
}


int main_13_8() {
    showStaticValue<int>();
    cout << "------------------" << endl;
    
    showStaticValue<short>();
    showStaticValue<short>();
    cout << "------------------" << endl;
    
    showStaticValue<double>();
    showStaticValue<double>();
    showStaticValue<double>();
    
    return 0;
}
