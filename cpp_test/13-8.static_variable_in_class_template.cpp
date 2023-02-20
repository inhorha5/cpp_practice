////
////  13-8.static_variable_in_class_template.cpp
////  cpp_test
////
////  Created by InHo Rha on 2/19/23.
////
//
//#include <iostream>
//
//using namespace std;
//
//
//template<typename T>
//class StaticTest {
//private:
//    static T member;
//    
//public:
//    void addToMember(int number) {
//        this->member += number;
//    }
//    
//    void showMember() {
//        cout << this->member << endl;
//    }
//};
//
//template <typename T>
//T StaticTest<T>::member = 0;
//
//template <>
//long StaticTest<long>::member = 10;
//
//
//int main_13_8() {
//    StaticTest<int> obj1;
//    StaticTest<int> obj2;
//    
//    obj1.addToMember(2);
//    obj2.addToMember(3);
//    obj1.showMember();
//    
//    StaticTest<long> obj3;
//    StaticTest<long> obj4;
//    obj3.addToMember(10);
//    obj4.showMember();
//    
//    return 0;
//}
