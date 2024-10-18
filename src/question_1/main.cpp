#include <iostream>
#include "question1.h"

int get_sold_widgets()
{
    int sold;
    std::cout << "How many widgets were sold? ";
    std::cin >> sold;
    return sold;
}

int main()
{
    int widgets_sold = get_sold_widgets();
    int earned_points = get_earned_points(widgets_sold);
    
    std::cout << "Earned points: " << earned_points << std::endl;
    
    return 0; 
}
