//
//  main.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/4/23.
//

#include <iostream>

void testFunc() {
    std::cout << "testFunc() is called" << std::endl;
}

void testFunc(int num) {
    std::cout << "testFunc(int num) is called" << std:: endl;
}

void testFunc(int num, int num2) {
    std::cout << "tstFunc(int num, int num2) is called" << std::endl;
}

void testFunc(char character) {
    std::cout << "testFunc(char chracter) is called" <<std::endl;
}

void testFunc(double num) {
    std::cout << "testFunction(double num) is called" << std::endl;
}



int main() {
    testFunc();testFunc(1);testFunc('c');testFunc(3.14);
//    int a = 10;
//    int b, c;
//    char name[100];
//
//    //output
//    std::cout << "Hello World" << std::endl;
//    std::cout << "Hello" << "World"  << std::endl;
//    std::cout << "H" << "e" << "l" << "l" << "o " << "World" <<std::endl;
//    std::cout << "My number is: " << a << std::endl;
//
//    //input
//    std::cin >> b >> c;
//    std::cout << b << ", " << c << std::endl;
//    std::cin >> name;
//    std::cout << name << std::endl;
    return 0;
}
