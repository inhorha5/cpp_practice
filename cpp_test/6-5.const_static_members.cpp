//
//  6-5.const_static_members.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/11/23.
//

#include <iostream>

using namespace std;

class CountryArea {
private:
    mutable int temp;
    
public:
    const static int RUSSIA         = 1707540;
    const static int CANADA         = 988467;
    const static int CHINA          = 957290;
    const static int SOUTH_KOREA    = 9922;
    
    int addNum(int num) const{
        this->temp += num;
        
        return num;
    }
};

int main_6_5(){
    cout << "러시아 면적: " << CountryArea::RUSSIA << "km^2" << endl;
    cout << "캐나다 면적: " << CountryArea::CANADA << "km^2" << endl;
    cout << "중국 면적: " << CountryArea::CHINA << "km^2" << endl;
    cout << "한국 면적: " << CountryArea::SOUTH_KOREA << "km^2" << endl;
    
    return 0;
}
