//
//  5-5.temporary.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/11/23.
//

#include <iostream>

using namespace std;

class Temporary {
private:
    int num;
    
public:
    Temporary(int n) : num(n) {
        cout << "Create obj: " << this->num << endl;
    }
    
    ~Temporary() {
        cout << "destroy obj: " << this->num << endl;
    }
    
    void showTemporaryInfo() {
        cout << "My num is " << this->num << endl;
    }
};

int main_5_5() {
    Temporary(100);
    cout << "********************after make!" << endl << endl;
    
    Temporary(200).showTemporaryInfo();
    cout << "********************after make!" << endl << endl;
    
    const Temporary& reference = Temporary(300);
    cout << "********************end of the main!" << endl << endl;
    
    return 0;
}
