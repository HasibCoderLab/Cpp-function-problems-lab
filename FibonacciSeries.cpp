
// ================================================
//               Language: C++ / Cpp
//               Topic   : [Function]
//               Problem : 👉👉 [4]
//               Want    : FibonacciSeries.cpp
//
// ================================================
#include <iostream>
using namespace std;
void printFibonacci(int n)
{
    int a = 0;
    int b = 1;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++)
    {
        cout<< a <<" " ;
        int next = a+b;
        a = b;
        b = next;
    }
    cout<<endl;
}
int main()
{
    int n;
    cout << "Enter the number of items :";
    cin >> n;
    printFibonacci(n);
    return 0;
}