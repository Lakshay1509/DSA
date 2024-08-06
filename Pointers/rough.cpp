// C++ program to illustrate macros
#include <iostream>
using namespace std;

// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b)) //((a) < (b)) compares a and b.
//? (a) : (b) is the ternary conditional operator. If the condition (a) < (b) is true, it returns (a), otherwise, it returns (b)

// Driver Code
int main()
{

    // Given two number a and b
    int a = 18;
    int b = 76;

    cout << "Minimum value between"
         << a << " and " << b
         << " is: " << min(a, b);

    return 0;
}
