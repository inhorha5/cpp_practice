//
//  main.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/4/23.
//

#include <iostream>

int main_1_1() {
    
    int a = 10;
    int b, c;
    char name[100];

    //output
    std::cout << "Hello World" << std::endl;
    std::cout << "Hello" << "World"  << std::endl;
    std::cout << "H" << "e" << "l" << "l" << "o " << "World" <<std::endl;
    std::cout << "My number is: " << a << std::endl;

    //input
    std::cin >> b >> c;
    std::cout << b << ", " << c << std::endl;
    std::cin >> name;
    std::cout << name << std::endl;
    return 0;
}
