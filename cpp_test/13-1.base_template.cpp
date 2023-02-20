//
//  13-1.base_template.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/19/23.
//

#include <iostream>

using namespace std;

template<typename T>
T add(T num1, T num2) {
    return num1 + num2;
}


int main_13_2() {
    cout << add(10,20) << endl;
//    cout << add<int>(10,20) << endl;
    cout << add(3.14, 0.1592) << endl;
//    cout << add<double>(3.14, 0.1592) << endl;
    
    return 0;
}
