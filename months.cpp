// Copyright (c) 2021 Jenoe Balote All Rights Reserved
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program tells the month of the year
//   inputted by the user

#include <iostream>

int main() {
    // this function runs the "Number Guessing Game"
    int number;


    // input
    std::cout << "What month of the year is it?";
    std::cout << "" << std::endl;
    std::cout << "Enter an number: ";
    std::cin >> number;
    std::cout << "" << std::endl;

    // process
    switch (number) {
        case '1' :
            std::cout << "January!" << std::endl;
            break;
        case '2' :
            std::cout << "February!" << std::endl;
            break;
        case '3' :
            std::cout << "March!" << std::endl;
            break;
        case '4' :
            std::cout << "April!" << std::endl;
            break;
        case '5' :
            std::cout << "May!" << std::endl;
            break;
        case '6' :
            std::cout << "June!" << std::endl;
            break;
        case '7' :
            std::cout << "July!" << std::endl;
            break;
        case '8' :
            std::cout << "August!" << std::endl;
            break;
        case '9' :
            std::cout << "September!" << std::endl;
            break;
        case '10' :
            std::cout << "October!" << std::endl;
            break;
        case '11' :
            std::cout << "November!" << std::endl;
            break;
        case '12' :
            std::cout << "December!" << std::endl;
            break;
    }
}
