 #include"question3.h"

int main() 
{
    int number;
    char choice;

    do 
    {
        std::cout << "Enter a number between 1 and 15: ";
        std::cin >> number;

        // Validation
        while (number < 1 || number > 15) 
        {
            std::cout << "Invalid input. Please enter a number between 1 and 15: ";
            std::cin >> number;
        }

        // Get Fibonacci number
        int fib_number = get_fib_number(number);
        std::cout << "Fibonacci number for " << number << " is: " << fib_number << std::endl;

        // Ask user if they want to continue
        std::cout << "Do you want to continue? (y/n): ";
        std::cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');

    return 0;
}