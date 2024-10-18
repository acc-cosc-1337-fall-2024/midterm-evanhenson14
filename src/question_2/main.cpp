#include "question2.h"


#include <iostream>
#include <string>

std::string decimal_to_binary(int value);

int main() 
{
    int input;
    char choice;

    do 
    {
        std::cout << "Enter an integer value (1 to 255): ";
        std::cin >> input;

       
        if (input < 1 || input > 255) 
        {
            std::cout << "Invalid input! Please enter a number between 1 and 255." << std::endl;
            continue; 
        }

        std::string binary_representation = decimal_to_binary(input);
        std::cout << "Binary representation: " << binary_representation << std::endl;

        
        std::cout << "Do you want to enter another number? (y/n): ";
        std::cin >> choice;

    } 
        while (choice == 'y' || choice == 'Y');

    std::cout << "Exiting the program. Goodbye!" << std::endl;
    return 0;
}
