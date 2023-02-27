//
//  15-7.inheritance_class_problem.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/25/23.
//

#include <iostream>

using namespace std;
class AAA{
public:
    void showYou() {
        cout << "AAA exception!" << endl;
    }
};

class BBB: public AAA{
public:
    void showYou() {
        cout << "BBB exception!" << endl;
    }
};


class CCC : public BBB {
public:
    void showYou() {
        cout << "CCC exception!" << endl;
    }
};


void ExceptionGenerator(int expn) {
    if (expn == 1)
        throw AAA();
    else if (expn == 2)
        throw BBB();
    else
        throw CCC();
}


int main_15_7() {
    try {
        ExceptionGenerator(3);
        ExceptionGenerator(2);
        ExceptionGenerator(1);
    }
    catch (AAA& expn) {
        cout << "catch(AAA& expn)" << endl;
        expn.showYou();
    }
    catch (BBB& expn) {
        cout << "catch(BBB& expn)" << endl;
        expn.showYou();
    }
    catch (CCC& expn) {
        cout << "catch(CCC& expn)" << endl;
        expn.showYou();
    }
    
    return 0;
}
