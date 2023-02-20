////
////  13-5.partial_speculation_in_class_template.cpp
////  cpp_test
////
////  Created by InHo Rha on 2/19/23.
////
//
//#include <iostream>
//
//using namespace std;
//
//template <typename T1, typename T2>
//class Simple {
//public:
//    void showSize() {
//        cout << "size of T1: " << sizeof(T1) << endl;
//        cout << "size of T2: " << sizeof(T2) << endl;
//        cout << "<typename T1, typename T2>" << endl;
//    }
//};
//
//template<>
//class Simple<int, double> {
//public:
//    void showSize() {
//        cout << "size of T1: " << sizeof(int) << endl;
//        cout << "size of T2: " << sizeof(double) << endl;
//        cout << "<int, double>" << endl;
//    }
//};
//
//template<typename T1>
//class Simple<T1, double> {
//public:
//    void showSize() {
//        cout << "size of T1: " << sizeof(T1) << endl;
//        cout << "size of double: " << sizeof(double) << endl;
//        cout << "<T1, double>" << endl;
//    }
//};
//
//int main_13_5() {
//    Simple<char, double> object1;
//    Simple<int, long> object2;
//    Simple<int, double> object3;
//    
//    object1.showSize();
//    object2.showSize();
//    object3.showSize();
//    
//    return 0;
//}
