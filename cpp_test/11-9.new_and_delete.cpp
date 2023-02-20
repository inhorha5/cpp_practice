//
//  11-9.new_and_delete.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/19/23.
//

#include <iostream>
#include <cstdlib>

using namespace std;


class Point3 {
private:
    int x, y;
    
public:
    Point3(int x = 0, int y = 0) : x(x), y(y) {}
    friend ostream& operator<<(ostream& os, const Point3& pos);
    
    void* operator new[](size_t size) {
        cout << "operator new[]: " << size << endl;
        void* address = new char[size];
        
        return address;
    }
    
    void* operator new(size_t size) {
        cout << "operator new: " << size << endl;
        void* address = new char[size];
        
        return address;
    }
    
    void operator delete (void* address) {
        cout << "operator delete()" << endl;
        delete[] address;
    }
    
    void operator delete[](void* address) {
        cout << "operator delete[]()" << endl;
        delete[] address;
    }
};



ostream& operator<<(ostream& os, const Point3& pos) {
    os << '[' << pos.x << ", " << pos.y << ']' << endl;
    
    return os;
}


int main_11_9() {
    Point3* ptr = new Point3(1,2);
    Point3* arr = new Point3[3];
    
    cout << *ptr;
    
    delete ptr;
    delete[] arr;
    
    return 0;
}
