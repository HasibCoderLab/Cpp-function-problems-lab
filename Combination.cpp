// ================================================
//               Language: C++ / Cpp
//               Topic   : [Function]
//               Problem : 👉👉 [1]
//               Want    : Combination
//                        
// ================================================
#include <iostream>
using namespace std;
int fact(int a){
    int f = 1;
    for (int i = 1; i <=a; i++)
    {
       f*=i;
    }
    return f ;
    

}
int main(){
    int x;
    cout<< "Enter number x " ;
    cin>> x;

   int y;
    cout<< "Enter number y " ;
    cin>> y;
    int a = fact(x);
    int b = fact(y);
    int c = fact(x-y);
    cout<< a /(b*c) <<endl;
    return 0 ;
}