////
////  13-4.class_template.cpp
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
//template <typename T>
//class Point_13_4 {
//private:
//    T x, y;
//    
//public:
//    Point_13_4(T x = 0, T y = 0);
//    
//    void showCoordinates() const;
//    friend Point_13_4<int> operator+(const Point_13_4<int>&, const Point_13_4<int>&);
//    friend ostream& operator<<(ostream& os, const Point_13_4<int>& pos);
//};
//
//
//Point_13_4<int> operator+(const Point_13_4<int>& coord1, const Point_13_4<int>& coord2){
//    return Point_13_4<int>(coord1.x + coord2.x, coord1.y + coord2.y);
//}
//
//ostream& operator<<(ostream& os, const Point_13_4<int>& coord) {
//    os << '[' << coord.x << ", " << coord.y << "]" << endl;
//    return os;
//}
//
//
//
//template <typename T>
//Point_13_4<T>::Point_13_4(T x, T y) : x(x), y(y) {};
//
//template <typename T>
//void Point_13_4<T>::showCoordinates() const {
//    cout << '[' << this->x << ", " << this->y << ']' << endl;
//}
//
//
//int main() {
//    Point_13_4<int> coord1(3, 4);
//    coord1.showCoordinates();
//    
//    Point_13_4<double> coord2(3.14, 0.1);
//    coord2.showCoordinates();
//    
//    Point_13_4<char> coord3('A', 'A');
//    coord3.showCoordinates();
//}
