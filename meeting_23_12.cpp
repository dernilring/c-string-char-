#include <iostream>

int main()
{
    char name[255]; // объ€вл€ем достаточно большой массив (дл€ хранени€ 255 символов)
    std::cout << "Enter your name: ";
    std::cin.getline(name,255);
    std::cout << "You entered: " << name << '\n';

    return 0;
}