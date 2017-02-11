#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t,a,b,n;
    cin>>t;
    while(t--)
     {
        cin>>n>>a>>b;
        n--;
        if(a!=b)
        {
     for(int i=0;i<=n;i++)
         {
         cout<<(n-i)*a+i*b<<" ";
         
     }
     }
     else
     {
     cout<<n*a;
     
     }
        cout<<"\n";
        
        
    }
 
    
    
    return 0;
}

