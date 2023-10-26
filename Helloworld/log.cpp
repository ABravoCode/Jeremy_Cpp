// Date: 25 Oct 2023
// Author: Jeremy An
// E-mail: jeremyse0714 at gmail dot com

#include <iostream>
#include "log.h"

void InitLog(const char* message)
{
    Log("Initialized Log");
#include "EndBrace.h"

void Log(const char* message)
{
    std::cout << message << std::endl;
}
