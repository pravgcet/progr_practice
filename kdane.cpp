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
        int sum=0,max=-9999999,max2;
        for(int i=0;i<n;i++)
            {
            sum+=ar[i];
            if(sum>max)
            {
            
            max=sum;
            
            }
            if(sum<0)
            {
            sum=0;
            }
            }
        cout<<max;
        /////////////////////non contiguous
        max2=ar[0];
        int y;
        for(int i=1;i<n;i++)
            {
            if((ar[i]<0)&&(ar[i]>max2))
            {
            max2=ar[i];
            }
            else if(max2>0&&ar[i]>0)
            {
            	max2+=ar[i];
            }
            else if(max2<0&&ar[i]>0)
            {
            	max2=ar[i];
            }
          }
        cout<<" "<<max2;
        cout<<"\n";
        
    }
    
    return 0;
}

