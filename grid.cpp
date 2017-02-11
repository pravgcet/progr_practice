#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
int t,n;
    cin>>t;
    while(t--)
        {
        cin>>n;
        string g[n];
        for(int i=0;i<n;i++)
            {
                cin>>g[i];
            sort(g[i].begin(),g[i].end());
            }

        int var;
        
        for(int i=0;i<n;i++)
            {var=0;
            for(int j=1;j<n-1;j++)
            {
                if(g[j][i]>g[j+1][i])
                    {
                    var=1;
                    
                    break;
                  }
            }
            if(var==1){break;}
        }
        if(var==1)
            {
            cout<<"NO"<<endl;
        }
        else
            {
            cout<<"YES"<<endl;
        }

        
        
        
        
    }
    return 0;
}

