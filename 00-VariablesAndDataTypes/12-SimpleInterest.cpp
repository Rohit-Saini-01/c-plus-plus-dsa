#include <iostream>
using namespace std;

int main()
{
    float principal, rate, time, si;

    cout << "Enter the value of principal, rate and time\n";
    cin >> principal >> rate >> time;

    si = (principal * rate * time) / 100;

    cout << "Simple Interest is: " << si;
    
    return 0;
}