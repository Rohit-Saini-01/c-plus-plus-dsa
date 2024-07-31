#include <iostream>
using namespace std;

int main()
{
    float side, area;

    cout << "Enter the side of the square\n";
    cin >> side;

    area = side * side;
    cout << "Area of the square with side " << side << " is " << area;
    
    return 0;
}