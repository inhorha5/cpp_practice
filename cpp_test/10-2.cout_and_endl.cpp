//
//  10-2.cout_and_endl.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/18/23.
//

#include <iostream>

namespace mystd{
    using namespace std;

    class ostream {
    public:
        ostream& operator<<(char* str) {
            printf("%s", str);
            
            return *this;
        }
        
        ostream& operator<<(char str) {
            printf("%c", str);
            
            return *this;
        }
        
        ostream& operator<<(int num) {
            printf("%d", num);
            
            return *this;
        }
        
        ostream& operator<<(double num) {
            printf("%f", num);
            
            return *this;
        }
        
        ostream& operator<<(ostream& ostream) {
            ostream << '\n';
            fflush(stdout);
            
            return ostream;
        }
        
    };
}


int main_10_2() {
    using mystd::endl;
    using mystd::cout;
    
    cout << "Simple String";
    cout << endl;
    cout << 3.14;
    cout << endl;
    cout << 123;
    endl(cout);
    
    cout << "-------------------" << endl;
    cout << "Simple String" << endl << 3.14 << endl << 123 << endl;
 
    return 0;
}
