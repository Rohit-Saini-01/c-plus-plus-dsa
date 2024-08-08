#include <iostream>

int main()
{
    int num_1, num_2, sum;

    std::cout << "Enter two integers\n";
    std::cin >> num_1 >> num_2;

    sum = num_1 + num_2;

    std::cout << "Sum of entered integers is: " << sum << std::endl;

    return 0;
}