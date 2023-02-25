//
//  15-2.pass_exception.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/25/23.
//

#include <iostream>

using namespace std;


void Divide(int num1, int num2) {
    if (num2 == 0)
        throw num2;
    
    cout << "quotient: " << num1 / num2 << endl;
    cout << "remainder: " << num1 % num2 << endl;
}


int main_15_2() {
    int num1, num2;
    cout << "Input numbers: ";
    cin >> num1 >> num2;
    
    try {
        Divide(num1, num2);
        cout << "Completed division" << endl;
    }
    catch (int expn) {
        cout << "Cannot divide by " << expn << endl;
        cout << "Run the program again" << endl;
    }
    
    return 0;
}
