
// ================================================
//               Language: C++ / Cpp
//               Topic   : [Function]
//               Problem : 👉👉 [4]
//               Want    : FibonacciSeries.cpp
//                        
// ================================================
#include <iostream>
using namespace std;
void printFibonacci(int n){
    int a =0;
    int b =1;
    for (int i = 0; i <=n; i++)
    {
       int next =a;
       a = b ;
       b = next ;
    }
    
}
int main(){
    int n;
    cout<< "Enter number " ;
    cin>> n;
    return 0 ;
}