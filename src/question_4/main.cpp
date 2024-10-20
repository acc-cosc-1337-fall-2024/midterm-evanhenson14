#include"question4.h"

int main() 
{
    int number;
    char choice;

    do 
    {
        std::cout << "Enter a number between 1 and 60: ";
        std::cin >> number;

        // Validate input
        while (number < 1 || number > 60) 
        {
            std::cout << "Invalid input. Please enter a number between 1 and 60: ";
            std::cin >> number;
        }

        // Get primes up to the specified number
        std::vector<int> primes = get_primes(number);
        
        // Display prime numbers
        std::cout << "Prime numbers up to " << number << ": ";
        for (int prime : primes) 
        {
            std::cout << prime << " ";
        }
        std::cout << std::endl;

        // Ask user if they want to continue
        std::cout << "Do you want to continue? (y/n): ";
        std::cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
