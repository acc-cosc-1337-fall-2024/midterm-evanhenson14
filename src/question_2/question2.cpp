#include "question2.h"

bool test_config()
{
    return true;
}

#include <iostream>
#include <string>

std::string decimal_to_binary(int value) 
{
    std::string binary;
    
   
    for (int i = 7; i >= 0; --i) 
    {
        if (value & (1 << i)) 
        {
            binary.push_back('1');
        } else {
            binary.push_back('0');
        }
    }
    
    return binary;
}
