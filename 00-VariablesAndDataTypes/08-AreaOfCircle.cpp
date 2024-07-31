#include <iostream>
using namespace std;

int main()
{
    float radius;

    cout << "Enter the value of radius\n";
    cin >> radius;

    float area = 3.14f * radius * radius;

    cout << "Area of the circle with radius " << radius << " is: " << area;
    
    return 0;
}