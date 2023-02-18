//
//  10-1.operator.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/18/23.
//

#include <iostream>

using namespace std;


class Point1 {
private:
    int x, y;
    
public:
    Point1(int x = 0, int y = 0) : x(x), y(y) {};
    
    void showPosition() const {
        cout << '[' << this->x << ", " << this->y << ']' << endl;
    }
    
    Point1 operator+(const Point1& ref) {
        Point1 pos(this->x + ref.x, this->y + ref.y);
        
        return pos;
    }
    
    Point1& operator++() {
        this->x++;
        this->y++;
        
        return *this;
    }
    
    Point1& operator++(int) {
        this->x++;
        this->y++;
        
        return *this;
    }
    
    friend Point1& operator--(Point1& ref);
    friend Point1& operator--(Point1& ref, int);
    
    Point1 operator*(int times) {
        Point1 pos(this->x * times, this->y * times);
        
        return pos;
    }
    
    friend Point1 operator* (int times, Point1& ref);
    
    friend ostream& operator<< (ostream& ostream, const Point1& post);
    
};


Point1& operator--(Point1& ref) {
    ref.x--;
    ref.y--;
    
    return ref;
}

Point1& operator--(Point1& ref, int) {
    ref.x--;
    ref.y--;
    
    return ref;
}

Point1 operator*(int times, Point1& ref) {
    return ref * times;
}

ostream& operator<< (ostream& ostream, const Point1& pos) {
    ostream << '[' << pos.x << ", " << pos.y << ']' << endl;

    return ostream;
}

int main_10_1() {
    Point1 pos1(3, 4);
    Point1 pos2(10, 20);
    Point1 pos3 = pos1.operator+(pos2);
    Point1 pos4 = pos1 + pos2;
    
    pos1.showPosition(); pos2.showPosition();
    pos3.showPosition(); pos4.showPosition();
    
    cout << "-----------------------" << endl;
    
    Point1 pos5 = ++pos1;
    pos1.showPosition();
    
    Point1 pos6 = --pos2;
    pos2.showPosition();
    
    cout << "-----------------------" << endl;
    
    Point1 pos7 = pos1++;
    pos7.showPosition();
    
    Point1 pos8 = pos2--;
    pos8.showPosition();
    
    cout << "-----------------------" << endl;
    
    Point1 pos9 = pos1 * 3;
    pos9.showPosition();
    
    Point1 pos10 = 3 * pos1;
    pos10.showPosition();
    
    Point1 pos11 = 3 * pos1 * 3;
    pos11.showPosition();
    
    cout << "-----------------------" << endl;
    
    cout << pos1;
    
    
    return 0;
}
