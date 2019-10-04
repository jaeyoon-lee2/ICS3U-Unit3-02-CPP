// Copyright (c) 2019 St. Mother Teresa HS All rights reserved

// Created by: Jaeyoon
// Created on: Oct 2019
// This program guesses random numbers

#include <iostream>

int main() {
    // this function guesses random numbers

    // input
    std::cout << "Enter the number (1 ~10): ";
    std::cin >> user_number;
    std::cout << "Hint: my number is 5" << std::endl;
    std::cout << "" << std::endl;

    // process
    if (user_number == 5) {
        // output
        std::cout << "It is correct!" << std::endl;
    }
}
