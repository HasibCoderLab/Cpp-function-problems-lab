// ================================================
//               Language: C++ / Cpp
//               Topic   : [Function]
//               Problem : 👉👉 [3]
//               Want    : PascalTriangle
//                        
// ================================================
#include <iostream>
using namespace std;
int fact(int a ){
    int f = 1 ;
    for (int i = 1; i <a; i++)
    {
        f*=i ;
       
    }
    return f;
    
}
// nCr Function
int nCr(int n , int r ){
    return fact(n)/ (fact(n)* fact(r)) ;

}
int main(){
    int n;
    cout<< "Enter number " ;
    cin>> n;
    for (int i = 1; i <=n; i++)
    {
        // print space .
        for (int  j = 1; j <= n- i-j ; j++)
        {
           cout<<" " ;
        }
        // Prinit Numbers ;
        for (int  j = 1;j <=i; j++)
        {
            cout<<nCr(i,j) <<" ";
        }
        cout<<endl;
        
    }
    

    return 0 ;
}