#include <iostream>
using namespace std;

int main()
{
    float marks_1, marks_2, marks_3;

    cout << "Enter your three subject marks\n";
    cin >> marks_1 >> marks_2 >> marks_3;

    float average_marks = (marks_1 + marks_2 + marks_3) / 3;

    cout << "Your average marks are:" << average_marks;

    return 0;
}