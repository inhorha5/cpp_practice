////
////  11-8.point_array.cpp
////  cpp_test
////
////  Created by InHo Rha on 2/19/23.
////
//
//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//
//class Point_11_8 {
//private:
//    int x, y;
//
//public:
//    Point_11_8(int x = 0, int y = 0) : x(x), y(y) {}
//    friend ostream& operator<<(ostream& os, const Point_11_8& pos);
//};
//
//
//class BoundCheckStablePtrArray {
//private:
//    Point_11_8** arr;
//    int arrLen;
//
//    BoundCheckStablePtrArray(const BoundCheckStablePtrArray& arr) {};
//    BoundCheckStablePtrArray& operator=(const BoundCheckStablePtrArray& arr) {
//        return *this;
//    };
//
//public:
//    BoundCheckStablePtrArray(int len) : arrLen(len) {
//        this->arr = new Point_11_8[len];
//    }
//
//    Point_11_8& operator[] (int index) {
//        if (index < 0 || index >= this->arrLen) {
//            cout << "Array index out of bound exception" << endl;
//            exit(1);
//        }
//
//        return this->arr[index];
//    }
//
//    Point_11_8& operator[] (int index) const{
//        if (index < 0 || index >= this->arrLen) {
//            cout << "Array index out of bound exception" << endl;
//            exit(1);
//        }
//
//        return this->arr[index];
//    }
//
//    int getArrayLength() const {
//        return this->arrLen;
//    }
//
//    ~BoundCheckStablePtrArray() {
//        delete[] this->arr;
//    }
//};
//
//
//void showAlldataInArray(const BoundCheckStablePtrArray& ref) {
//    int len = ref.getArrayLength();
//
//    for (int i = 0; i < len; i++)
//        cout << ref[i] << endl;
//}
//
//ostream& operator<<(ostream& os, const Point_11_8& pos) {
//    os << '[' << pos.x << ", " << pos.y << ']' << endl;
//
//    return os;
//}
//
//
//int main() {
//    BoundCheckStablePtrArray arr(3);
//    arr[0] = new Point_11_8(1,2);
//    arr[1] = new Point_11_8(3,4);
//    arr[2] = new Point_11_8(5,6);
//
//    for (int i = 0; i < arr.getArrayLength(); i++)
//        cout << *(arr[i]);
//
//    for (int i = 0; i < arr.getArrayLength(); i++)
//        delete arr[i];
//}
