#include "lib.hpp"
#include <iostream>

// TODO: correct this bug
//Num::Num() : num(0)
//{
//}
Num::Num(int n) : num(n)
{
}
int Num::getNum()
{
    return num;
}
void Num::printGreeting()
{
    std::cout << "Hello, World!" << std::endl;
}