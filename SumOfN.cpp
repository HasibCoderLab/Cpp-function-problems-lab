
// ================================================
//               Language: C++ / Cpp
//               Topic   : [function]
//               Problem : 👉👉 [1]
//               Want    :SumOfN
//                        
// ================================================
#include <iostream>
using namespace std;
int sum(int a , int b){
    cout<<"Total " ;
int result = a+b;
return result;
}
int main(){
    int n, m;
    cout<< "Enter number 1st Number " ;
    cin>> n;
    cout<< "Enter number 2nd Number " ;
   
    cin>>m;
    cout<<sum(n,m) <<endl;;
    return 0 ;
}