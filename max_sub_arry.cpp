#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    ///////////////contiguous sum
    int t,n;
    cin>>t;
    while(t--)
        {
        cin>>n;
        int ar[n],br[n];
        for(int i=0;i<n;i++)
            {
            cin>>ar[i];
            }
        double sum,max,max2;
        max=br[0]=ar[0];
        for(int i=1;i<n;i++)
            {
            sum=br[i-1]+ar[i];
            if(sum>=max&&sum>=ar[i-1])
                {
                max=sum>ar[i]?sum:ar[i];
                br[i]=sum;
            }
           else
                {
                br[i]=ar[i];
            }
        }
        cout<<max;
        /////////////////////non contiguous
        max2=ar[0];
        for(int i=1;i<n;i++)
            {
            int t=(max2+ar[i]);
            if(t>max2)
                {
                max2=t;
            }
            else if(max2<ar[i])
                {
                max2=ar[i];
            }
            
        }
        cout<<" "<<max2;
        cout<<"\n";
        
    }
    
    return 0;
}

