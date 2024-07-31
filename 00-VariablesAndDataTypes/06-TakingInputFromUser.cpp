#include <iostream>
using namespace std;

int main()
{
    int num;
    string name;

    cout << "Enter an integer followed by your name\n";
    cin >> num;

    cin.ignore();

    getline(cin, name);

    cout << "The number you entered is: " << num << " and your name is: " << name;

    return 0;
}