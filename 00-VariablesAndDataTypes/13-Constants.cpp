#include <iostream>
#define PI 3.14
// Don't confuse macros with constants. These are symbolic constants in which the word PI is replaced by the value 3.14 at runtime. So macros are not stored in memory

using namespace std;

int main()
{
    const int num = 10;

    /* Just use const keyword while declaring variable. Note that it must be initialised at the time of declaration.

    const int num;
    num =10;
    THIS IS NOT ALLOWED
    */

    return 0;
}