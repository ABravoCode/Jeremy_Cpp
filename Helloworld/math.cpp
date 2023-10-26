// Date: 25 Oct 2023
// Author: Jeremy An
// E-mail: jeremyse0714 at gmail dot com

#include <iostream>
#include "log.h"

#define INTERGER int

static INTERGER Multiply(int a, int b)
//INTERGER Multiply(int a, int b)
{
    Log("This is Multiply function in Math.cpp");
    return a * b;
}

int main()
{
    Log("Hello world in Math.cpp!");
    std::cin.get();
    std::cout << "5*7=35 " << Multiply(5, 7);
    return 0;
}
