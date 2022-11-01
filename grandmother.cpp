// Copyright (c) 2022 Lucas DeBruyn All rights reserved

// Created by: Lucas DeBruyn
// Created on: October 2022
// This program is tells a user if they are allowed to date my grandchild

#include <iostream>

int main() {
    // This function determines if they can date my grandchild

    int user_age;
    std::string user_age_string;

    // Input
    std::cout << "Enter your age: ";
    std::cin >> user_age_string;

    // Process and Output
    try {
        user_age = std::stoi(user_age_string);

        if (user_age > 40 || user_age < 25) {
            std::cout << "\nYou can not date my grandchild."
                      << std::endl;
        } else {
            std::cout << "\nYou can date my grandchild!"
                      << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nPlease input a valid number." << std::endl;
    }

    std::cout << ("\nDone.") << std::endl;
}
