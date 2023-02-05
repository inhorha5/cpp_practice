//
//  main.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/4/23.
//

#include <iostream>
#define SQUARE(x) ((x) * (x)) // macro function

inline int square(int x) {
    return x * x;
}

int main_1_3() {
    std::cout << SQUARE(5) << std::endl;
    std::cout << SQUARE(5.5) << std::endl;
    std::cout << square(5) << std::endl;
    std::cout << square(5.5) << std::endl;
    return 0;
}
