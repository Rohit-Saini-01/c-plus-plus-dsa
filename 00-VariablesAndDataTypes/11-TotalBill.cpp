#include <iostream>
using namespace std;

int main()
{
    float pencil_cost, pen_cost, eraser_cost;

    cout << "Enter the cost of pencil, pen and eraser respectively\n";
    cin >> pencil_cost >> pen_cost >> eraser_cost;

    float total_bill = pen_cost + pencil_cost + eraser_cost;
    float bill_with_gst = total_bill + 0.18f * (total_bill);

    cout << "Total Bill without gst: " << total_bill << "\n";
    cout << "total Bill with gst: " << bill_with_gst;

    return 0;
}
