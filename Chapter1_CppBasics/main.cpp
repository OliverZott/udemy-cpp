#include <iostream>

#include "Exercise_1_square.h"


int main()
{

    double a;
    double b;

    std::cout << "Enter first numbers" << std::endl;
    std::cin >> a;
    std::cout << "Enter second numbers" << std::endl;
    std::cin >> b;

    std::cout << "Result: " << calculateSquare(a, b) << std::endl;

    return 0;
}
