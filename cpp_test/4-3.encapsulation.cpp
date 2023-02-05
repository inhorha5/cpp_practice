//
//  4-3.encapsulation.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/5/23.
//

#include <iostream>

using namespace std;

class SinivelCapsule {
public:
    void take() const {
        cout << "콧물이 싹~ 납니다" << endl;
    }
};

class SneezeCapsule {
public:
    void take() const {
        cout << "재채기가 멎습니다" << endl;
    }
};

class SnuffleCapsule {
public:
    void take() const {
        cout << "코가 뻥 뚤립니다." << endl;
    }
};

class Contac600 {
private:
    SinivelCapsule snivelCapsule;
    SneezeCapsule sneezeCapsule;
    SnuffleCapsule snuffleCapsule;
    
public:
    void take() const {
        snivelCapsule.take();
        sneezeCapsule.take();
        snuffleCapsule.take();
    }
};

class Patient {
public:
    void takeContac600(const Contac600& capsule) const {
        capsule.take();
    }
};

int main_4_3(){
    Contac600 contac600;
    Patient patient;
    patient.takeContac600(contac600);
    return 0;
}
