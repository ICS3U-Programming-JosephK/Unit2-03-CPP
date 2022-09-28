// Copyright (c) 2022 Joseph Kwon All rights reserved.
//
// Created by: Joseph Kwon
// Created on: Sep. 27, 2022
// This program asks the user for the radius of a circle
// and displays the circumference and area
#include <cmath>
#include <iostream>

int main() {
    // declare constants
    const float TAU = 6.28;

    // declare variables
    float radius, circumference, area;

    // get input from user (radius())
    std::cout << "Calculator for circumference\n";
    std::cout << "and area of a circle.\n";
    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;

    // calculate the circumference and area using TAU
    circumference = TAU * radius;
    area = M_PI * pow(radius, 2);

    // display the results to the user
    std::cout << std::endl;
    std::cout << "circumference = " << circumference << " cm.\n";
    std::cout << "area = " << area << "cm^2.\n";
}
