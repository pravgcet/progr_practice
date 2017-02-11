#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long long int t,m,n,s;
    cin>>t;
    while(t--)
        {
        cin>>m>>n;
        s=m+n-1;
        
    
     int max=s-1;
     unsigned long long int *ar[s],e;
     
    for(e=0;e<s;e++)
        {
        ar[e]=(unsigned long long int *)malloc(s);
    }
// cout<<"Max is : "<<max<<endl;
    
 ar[0][0]=1;
 ar[1][0]=1;
 ar[1][1]=1;
			 for(int i=2;i<=max;i++)
			 {
			 	ar[i][0]=1;
			 	ar[i][1]=i;
			 	for(int j=2;j<i;j++)
			 	{
                   // cout<<"Updated\n";
			 		ar[i][j]=ar[i-1][j-1]+ar[i-1][j];
                    ar[i][j]=ar[i][j]%1000000007;
			 	}
			 	ar[i][i]=1;
			 }
          
  
     for(int i=0;i<=max;i++)
			 {
				 	for(int j=0;j<=i;j++)
			 	{
                        cout<<ar[i][j]<<"  ";
                    }
         cout<<endl;
     }
     
    cout<<"hi\n";
   cout<<ar[s-1][m-1];
    }
    return 0;
}

