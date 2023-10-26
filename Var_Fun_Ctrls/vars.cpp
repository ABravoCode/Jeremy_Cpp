// Date: 26 Oct 2023
// Author: Jeremy An
// E-mail: jeremyse0714 at gmail dot com

#include <iostream>

void vars_run()
{
    // char, short, int, long, long long, long int; (+unsigned ~)
    // float, double
    int variable = 8; // 4bytes approx: -2b -> 2b
    std::cout << variable << std::endl;

    // variable = 4294967295;
    // warning: overflow in implicit constant conversion [-Woverflow]
    // std::cout << variable << std::endl; // -1

    unsigned int variable_uns = 4294967295;
    std::cout << variable_uns << std::endl;

    char a = 'a';
    std::cout << a << std::endl; // a
    a = 65;
    std::cout << a << std::endl; // A

    short b = 'A';
    std::cout << b << std::endl; // '65'

    float c = 5.5f; // 4bytes
    double d = 5.2; // 8bytes
    std::cout << c << std::endl; // 5.5

    bool TF = true; // 1byte not 1bit!
    // Can only address byte in memory but not bit
    std::cout << TF << std::endl; // 1
    TF = false;
    std::cout << TF << std::endl; // 0

    std::cout << sizeof(double) << std::endl; // 8
} // Datatype is for allocating memory
