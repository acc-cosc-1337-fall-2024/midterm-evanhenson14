#include"question4.h"

//
bool test_config()
{
    return true;
}

// Function to check if a number is prime
bool is_prime(int num) 
{
    if (num <= 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to collect prime numbers 
std::vector<int> get_primes(int num) 
{
    std::vector<int> primes;
    for (int i = 2; i <= num; i++) 
    {
        if (is_prime(i)) 
        {
            primes.push_back(i); // Add prime to the vector
        }
    }
    return primes; 
}
