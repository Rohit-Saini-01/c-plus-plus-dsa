#include <iostream>
using namespace std;

int main()
{
    float PI = 3.14f;
    cout << (int)PI << "\n";

    cout << (float)10 / 3<<endl;
    cout << (char)('A' + 1)<<endl;

    cout << ((bool)3 + 2)<<endl; // 3 is explicitly typecasted to 1 that is integral value for true

    cout << (23.5 + 2 + 'A'); // Implicitly type casted to double (90.5)

    return 0;
}