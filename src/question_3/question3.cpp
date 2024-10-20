#include "question3.h"

bool test_config()
{
    return true;
}


int get_fib_number(int num) 
{
    if (num == 0) return 0;
    if (num == 1) return 1;

    int a = 0, b = 1, c;
    for (int i = 2; i <= num; i++) 
    {
        c = a + b; // c is the next Fibonacci number
        a = b;     // move to next
        b = c;     // move to next
    }
    return b; // b is now the Fibonacci number
}