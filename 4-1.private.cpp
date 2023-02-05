//
//  4-4.private.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/5/23.
//

#include <iostream>

using namespace std;

class Point {
private:
    int x;
    int y;
    
public:
    Point(int x, int y) {
        setX(x);
        setY(y);
    };
    
    int getX() const {
        return x;
    };
    
    int getY() const {
        return y;
    };
    
    bool setX(int x) {
        if(x < 0 || x > 100) {
            cout << "범위 초과 (0 <= x <= 100" << endl;
            return false;
        }
        
        this->x = x;
        
        return true;
    }
    
    bool setY(int y) {
        if(y < 0 || y > 100) {
            cout << "범위 초과 (0 <= y <= 100" << endl;
            return false;
        }
        
        this->y = y;
        
        return true;
    }
};

class Rectangle {
private:
    Point upLeft;
    Point lowRight;
    
public:
    Rectangle(Point upLeft, Point lowRight) : upLeft(upLeft), lowRight(lowRight) {}
    
    void showRectangleInfo() {
        cout << "좌상단 " << '[' << upLeft.getX() << ", ";
        cout << upLeft.getY() << ']' << endl;
        cout << "우하단 " << '[' << lowRight.getX() << ", ";
        cout << lowRight.getY() << ']' << endl;
    };
};


int main_4_1() {
    Point point1 = {3,4};
    Point point2 = {10,20};
    Rectangle rectangle1 = {point1, point2};
    rectangle1.showRectangleInfo();
    
    return 0;
}
