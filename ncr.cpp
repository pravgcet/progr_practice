#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
        {
        int n,fl;
        cin>>n;
        long long int ar[n],r;
        ar[0]=1;
        ar[1]=n;
        fl=(n/2);
        for(int i=2;i<=fl;i++)
            {
            ar[i]=((ar[i-1]*(n-i+1))%1000000000)/i;
            ar[i]=ar[i]%1000000000;
        }
        for(int i=fl+1;i<=n;i++)
         {
         
         ar[i]=ar[n-i];
          
        }
        
        for(int i=0;i<=n;i++)
            {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}

