//
//  15-1.exception.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/25/23.
//

#include <iostream>

using namespace std;


int main_15_1() {
    int num1, num2;
    cout << "Input numbers: ";
    cin >> num1 >> num2;
    
    try {
        if (num2 == 0)
            throw num2;
        
        cout << "quotient: " << num1 / num2 << endl;
        cout << "remainder: " << num1 % num2 << endl;
    }
    catch (int expn){
        cout << expn << "으로 나눌 수 없습니다" << endl;
        cout << "프로그램을 다시 실행하세요" << endl;
    }
    
    cout << "End of main" << endl;
    
    return 0;
}
