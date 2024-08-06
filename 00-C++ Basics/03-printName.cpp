#include <iostream>

int main()
{
    std::string name;

    std::cout << "May I know your name?\n";
    getline(std::cin, name);

    std::cout << "Welcome " << name << std::endl;

    return 0;
}