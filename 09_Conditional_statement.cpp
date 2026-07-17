#include <iostream>
int main()
{

    int age;

    std::cout << "Enter your age ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "Eligible";
    }
    else if (age <= 0)
    {
        std::cout << "Invalid Value";
    }
    else
    {
        std::cout << "You are not eligible";
    }
    return 0;
}