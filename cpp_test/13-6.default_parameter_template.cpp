////
////  13-6.default_parameter_template.cpp
////  cpp_test
////
////  Created by InHo Rha on 2/19/23.
////
//
//#include <iostream>
//
//using namespace std;
//
//template <typename T=int, int len=7>
//class Array {
//private:
//    T arr[len];
//    
//public:
//    T& operator[] (int index) {
//        return arr[index];
//    }
//    
//    T& operator=(const T& ref) {
//        for (int i = 0; i < len; i++)
//            arr[i] = ref.arr[i];
//    }
//};
//
//
//int main() {
//    Array<> arr;
//    for (int i = 0; i < 7; i++)
//        arr[i] = i + 1;
//    for (int i = 0; i < 7; i++)
//        cout <<arr[i] << " ";
//    cout << endl;
//    
//    Array<double, 10> arr2;
//    for (int i = 0; i < 10; i++)
//        arr2[i] = i + 1;
//    for (int i = 0; i < 10; i++)
//        cout <<arr2[i] << " ";
//    cout << endl;
//    
//    return 0;
//}
