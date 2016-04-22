//
//  main.cpp
//  Complex_Numbers
//
//  Created by Brett Meyer on 4/21/16.
//  Copyright © 2016 Brett Meyer. All rights reserved.
//
#include <string>
#include <iostream>
#include "ComplexNumber.h"

int main(int argc, const char * argv[]) {
    ComplexNumber C1,C2;
    //Enter complex numbers
    std::cout << "Enter a complex number C1:\n";
    cin >> C1;
    std::cout << "Enter a complex number C2:\n";
    cin >> C2;
    std::cout << "For C1 = " << C1 << " and C2 = " << C2 << " :\n";
    std::cout << "C1 + C2 = " << C1 + C2 << "\n";
    return 0;
}
