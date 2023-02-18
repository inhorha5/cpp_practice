//
//  11-5.functor.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/18/23.
//

#include <iostream>

using namespace std;



class Point_11_5 {
private:
    int x, y;
    
public:
    Point_11_5(int x = 0, int y = 0) : x(x), y(y) {};
    
    void showPosition() const {
        cout << '[' << this->x << ", " << this->y << ']' << endl;
    }
    
    Point_11_5 operator+(const Point_11_5& ref) {
        Point_11_5 pos(this->x + ref.x, this->y + ref.y);
        
        return pos;
    }
    
    Point_11_5& operator++() {
        this->x++;
        this->y++;
        
        return *this;
    }
    
    Point_11_5& operator++(int) {
        this->x++;
        this->y++;
        
        return *this;
    }
    
    friend Point_11_5& operator--(Point_11_5& ref);
    friend Point_11_5& operator--(Point_11_5& ref, int);
    
    Point_11_5 operator*(int times) {
        Point_11_5 pos(this->x * times, this->y * times);
        
        return pos;
    }
    
    friend Point_11_5 operator* (int times, Point_11_5& ref);
    
    friend ostream& operator<< (ostream& ostream, const Point_11_5& post);
    
};


Point_11_5& operator--(Point_11_5& ref) {
    ref.x--;
    ref.y--;
    
    return ref;
}

Point_11_5& operator--(Point_11_5& ref, int) {
    ref.x--;
    ref.y--;
    
    return ref;
}

Point_11_5 operator*(int times, Point_11_5& ref) {
    return ref * times;
}

ostream& operator<< (ostream& ostream, const Point_11_5& pos) {
    ostream << '[' << pos.x << ", " << pos.y << ']' << endl;

    return ostream;
}


class Adder {
public:
    int operator()(const int& num1, const int& num2){
        return num1 + num2;
    }
    
    double operator()(const double& value1, const double& value2) {
        return value1 + value2;
    }
    
    Point_11_5 operator()(Point_11_5 pos1, Point_11_5 pos2) {
        return pos1 + pos2;
    }
};


int main() {
    Adder adder;
    
    cout << adder(1, 3) << endl;
    
    cout << adder(1.5, 3.7) << endl;
    cout << adder(Point_11_5(3,4), Point_11_5(10,20));
    
    return 0;
}
