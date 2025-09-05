// ================================================
//               Language: C++ / Cpp
//               Topic   : [Function]
//               Problem : 👉👉 [2]
//               Want    : Permutation.cpp
//
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
    int r;
    cout << "Enter number n : ";
    cin >> n;

    cout << "Enter number : r ";
    cin >> r;
    int a = fact(n);
    int b = fact(n-r);
    cout <<a/b << endl;
    return 0;
}