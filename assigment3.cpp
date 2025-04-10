// Copyright (c) 2025 Dylan Mutabazi All rights reserved
//
// Created by Dylan Mutabazi
// Created March 2025
// This calculates asks for the size o your burger,
// if you want fries and drinks, and calculates the total
#include <iomanip>
#include <iostream>
#include <string>

int main() {
    // Caution note
    std::cout << "CAUTION!!!!\n";
    std::cout << "THE PROGRAM ONLY ACCEPTS PROVIDED NUMBERS or Y/N INPUTS FROM USER\n";
    std::cout << "ANYTHING ELSE WILL END THE PROGRAM AND WILL REQUIRE A RESTART\n";
    std::cout << "You have been warned\n\n";

    // Greeting
    std::cout << "Hello and welcome to Wacdonalds, the best fastfood place to eat.\n";
    std::cout << "Here is the provided menu.\n";

    std::cout << "-----------------------------------------------------------------------------------------------------------------\n";
    std::cout << "1. Simple beef burger order ------ $12.00\n";
    std::cout << "2. THE MINECRAFT combo order ----- SOLD OUT\n";
    std::cout << "-----------------------------------------------------------------------------------------------------------------\n\n";

    // User order choice
    std::string order_choice_str;
    std::cout << "May I have your order?\n> ";
    std::cin >> order_choice_str;

    try {
        int order_choice = stoi(order_choice_str);

        if (order_choice < 1 || order_choice > 2) {
            std::cout << "\nThis input was not part of the program. Please restart.\n";
        }

        if (order_choice == 1) {
            float price = 12.00;

            // Ask for burger size
            std::cout << "\nWhat size would you like your beef burger to be:\n";
            std::cout << "1. Large\n2. Small\n> ";
            std::string size_choice_str;
            std::cin >> size_choice_str;

            try {
                int size_choice = stoi(size_choice_str);

                if (size_choice < 1 || size_choice > 2) {
                    std::cout << "\nThis input was not part of the program. Please restart.\n";
                }

                // Ask for fries
                std::cout << "\nWould you like fries with that (y/n)?\n> ";
                std::string fries_choice;
                std::cin >> fries_choice;

                if (fries_choice == "y" || fries_choice == "Y" || fries_choice == "yes" || fries_choice == "Yes") {
                    price += 2.29;
                } else if (!(fries_choice == "n" || fries_choice == "N" || fries_choice == "no" || fries_choice == "NO")) {
                    std::cout << "Invalid input\n";
                }

                // Ask for soda
                std::cout << "Would you like a beverage with your meal (y/n)?\n> ";
                std::string soda_choice;
                std::cin >> soda_choice;

                if (soda_choice == "y" || soda_choice == "Y" || soda_choice == "yes" || soda_choice == "Yes") {
                    price += 3.89;
                } else if (!(soda_choice == "n" || soda_choice == "N" || soda_choice == "no" || soda_choice == "NO")) {
                    std::cout << "Invalid input\n";
                }

                // Calculate total
                float tax = price * 0.13;
                float total = price + tax;

                std::cout << std::fixed << std::setprecision(2);
                std::cout << "\nYour total rounds up to $ " << total << "\n";
            } catch (...) {
                std::cout << "This input was not part of the program. Please restart.\n";
            }
        } else if (order_choice == 2) {
            std::cout << "\nMy apologies, but the MINECRAFT combo is sold out.\n";
            std::cout << "Please try again later.\n";
        }
    }catch (...) {
        std::cout << "This input was not part of the program. Please restart.\n";
    }

    // Final message
    std::cout << "\nThanks for playing\n";
}
