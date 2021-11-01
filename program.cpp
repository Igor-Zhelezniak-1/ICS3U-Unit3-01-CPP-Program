/// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This program calculates total of numbers

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates total of numbers
    float number1;
    float number2;
    float total;

    // input
    std::cout << "Enter first number: ";
    std::cin >> number1;
    std::cout << "Enter second number: ";
    std::cin >> number2;

    // process
    total = number1 + number2;

    // output
    std::cout << number1 << " + " << number2 << " = " << total << std::endl;
}
