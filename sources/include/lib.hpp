/**
 * @file lib.hpp
 * @author Lucas Gasparino (you@domain.com)
 * @brief Prototype of class Num
 * @version 0.1
 * @date 2022-05-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#pragma once

class Num
{
private:
    /* data */
    int num;
public:
    Num(int n);
    int getNum();
    void printGreeting();
};