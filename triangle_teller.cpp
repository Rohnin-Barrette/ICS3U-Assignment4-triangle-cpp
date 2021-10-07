// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: Sep 2021
//  this program tells the difference between equilateral,
// isosceles and scalene triangles


#include <iostream>

int main() {
    // this program tells the difference between equilateral,
    // isosceles and scalene triangles

    int side1;
    std::string side1_string;
    int side2;
    std::string side2_string;
    int side3;
    std::string side3_string;

    // input
    std::cout << "Enter the first side of the triangle: ";
    std::cin >> side1_string;
    std::cout << "Enter the second side of the triangle: ";
    std::cin >> side2_string;
    std::cout << "Enter the third side of the triangle: ";
    std::cin >> side3_string;
    std::cout << "" << std::endl;
    // process
    try {
        side1 = std::stoi(side1_string);
        side2 = std::stoi(side2_string);
        side3 = std::stoi(side3_string);
        if (side1 == side2 && side2 == side3 && side1 == side3) {
            std::cout << "That's an equilateral triangle" << std::endl;
        } else {
            if (side1 == side2 || side2 == side3 || side1 == side3) {
                std::cout << "That's an isosceles triangle" << std::endl;
            } else {
                std::cout << "That's a scalene triangle" << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "invalid input" << std::endl;
    }
    std::cout << "Done.";
}
