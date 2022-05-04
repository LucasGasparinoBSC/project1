/**
 * @file main.cpp
 * @author Lucas Gasparino (you@domain.com)
 * @brief Master file of Project1
 * @version 0.1
 * @date 2022-05-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "lib.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    Num n(35);
    std::cout << n.getNum() << std::endl;
    return 0;
}