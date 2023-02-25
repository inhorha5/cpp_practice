//
//  15-3.differnt_handling_position.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/25/23.
//

#include <iostream>
#include <cmath>

using namespace std;


int convertStringToInteger(char* str) {
    int len = strlen(str);
    int num = 0;
    
    for (int i = 0; i < len; i++) {
        if (str[i] < '0' || str[i] > '9')
            throw str[i];
        
        num += (int)(pow((double)10, (len -1) -i ) * (str[i] + (7 - '7')));
    }
    
    return num;
}


int main_15_3() {
    char str1[100];
    char str2[100];
    
    while (1) {
        cout << "Input numbers: ";
        cin >> str1 >> str2;
        
        try {
            cout << str1 << " + " << str2 << " = " << convertStringToInteger(str1) + convertStringToInteger(str2) << endl;
            
            break;
        }
        catch (char ch) {
            cout << "character '" << ch << "' exists" << endl;
            cout << "Input again" << endl << endl;
        }
    }
    
    return 0;
}
