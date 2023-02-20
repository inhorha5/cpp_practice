////
////  13-3.specialization.cpp
////  cpp_test
////
////  Created by InHo Rha on 2/19/23.
////
//
//#include <iostream>
//
//using namespace std;
//
//template <typename T>
//T Max(T a, T b) {
//    return a > b ? a : b;
//}
//
//
//template <>
//char* Max(char* a, char* b) {
//    cout << "char* Max<char*>(char* a, char* b)" << endl;
//
//    return strlen(a) > strlen(b) ? a : b;
//}
//
//template<>
//const char* Max(const char* a, const char* b){
//    cout << "const char* Max<const char*>(const char* a, const char* b)" << endl;
//
//    return strlen(a) > strlen(b) ? a : b;
//}
//
//
//int main() {
//    cout << Max(11, 15) << endl;
//    cout << Max(3.5, 7.5) << endl;
//    cout << Max("a", "z") << endl;
//    cout << Max("simple", "best") << endl;
//
//    return 0;
//}
