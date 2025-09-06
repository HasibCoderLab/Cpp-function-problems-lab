// ================================================
//               Language: C++ / Cpp
//               Topic   : [function]
//               Problem : 👉👉 [3]
//               Want    : Factorial
// ================================================
#include <iostream>
using namespace std;
int fact(int a)
{
    int f = 1;
    for (int i = 1; i <= a; i++)
    {
        f *= i;
    }
    return f;
}
int main()
{
    int n;
    cout << "Enter number for Factorial :";
    cin >> n;
    cout<<fact(n) << endl;

    return 0;
}