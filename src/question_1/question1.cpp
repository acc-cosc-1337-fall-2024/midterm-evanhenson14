#include "question1.h"


bool test_config()
{
    return true;
}


int get_earned_points(int num)
{
    if (num >= 1 && num <= 5){
        return 1 * num;
    }
    else if(num >= 6 && num <= 10)
    {
        return 5 * num;
    }
    else if(num >= 11 && num <= 15)
    {
        return 10 * num;
    }
    else if(num >= 16)
    {
        return 15 * num;
    }
    else
    {
        return 0;
    }
}