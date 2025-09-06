
// ================================================
//               Language: C++ / Cpp
//               Topic   : [function]
//               Problem : 👉👉 [2]
//               Want    :SumOfN Using Void Function
//                        
// ================================================
#include <iostream>
using namespace std;
void sum(int a , int b){
    cout<<"Total ";
    int total = a+b;
    cout<< total << endl; ;
}
int main(){
    int n,m;
    cout<<"Enter 1st Number " ;
    cin>>n;
    cout<<"Enter 2nd Number " ;
    cin>>m;
    sum(n,m);
    return 0;
}