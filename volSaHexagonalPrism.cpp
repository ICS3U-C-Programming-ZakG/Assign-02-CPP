// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Oct. 15, 2023
// This program calculates the volume and surface area
// of a hexagonal prism with user-given dimensions

#include <cmath>
#include <iostream>
#include <iomanip>

// Declare variables
float baseEdge, height, surfaceArea, volume;

int main() {
    // Introduce program to user and ask for base edge, height, and units
    std::cout << "\033[34mThis program calculates";
    std::cout << "the surface area and volume of a";
    std::cout << " hexagonal prism with user given dimensions";
    std::cout << "and units.\n " << std::endl;
    std::cout << "Please enter the unit of measurement you'd like to use: ";
    std::string units = " ";
    std::cin >> units;
    std::cout << "Please enter a base edge: ";
    std::cin >> baseEdge;
    std::cout << "Please enter a height: ";
    std::cin >> height;
    std::cout << "\n";

    // Check if height and base edge are positive
    if (baseEdge <= 0 || height <= 0) {
        std::cout << "\033[31mYou cannot use negative numbers.\n";
        return 0;
    } else {
        // If base edge and height aren't negative,
        // calculate volume and surface area
        volume = 3 * sqrt(3) / 2 * pow(baseEdge, 2) * height;
        surfaceArea = 6 * baseEdge * height + 3 * sqrt(3) * pow(baseEdge, 2);
    }

    // Display volume and surface area with user inputted units
    std::cout << "\033[32mThe volume of the hexagonal prism is: "
    << std::fixed << std::setprecision(2) << volume << units << "^3\n";
    std::cout << "The surface area of the hexagonal prism is: "
    << std::fixed << std::setprecision(2) << surfaceArea << units << "^2\n";
}
