// Copyright (c) 2022 Paterry Baptichon J All rights reserved.
//
// Created by Paterry Baptichon
// Created on 2022-05-01
// this program lets user decide amount of number to be inputed and what numbers
// will be inputed and calculates the sum of the numbers entered
#include <iostream>

int main() {
    // This function takes an optional amount of numbers to be added together

    std::string counterStr;
    std::string numberStr;
    int counter;
    int number;
    int answer = 0;

    std::cout << "How many numbers would you like to add: ";
    std::cin >> counterStr;
    std::cout << "" << std::endl;
// cast user number into an int
    try {
            counter = std::stoi(counterStr);
            while (counter > 0) {
                counter = counter - 1;
                // ask for the number the user wants to add
                std::cout << "Enter a number to add: ";
                std::cin >> numberStr;
                try {
                    number = std::stoi(numberStr);
                    if (!(number > 0)) {
                        continue;
                    } else {
                        answer = answer + number;
                    }
                } catch (std::invalid_argument) {
                    continue;
                }
            }
            // Display the numbers added and the final sum to the user.
            std::cout << "The sum is " << answer << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input, Try Again";
    }
}
