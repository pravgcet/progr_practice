#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
   char s[1000];
    int wq,buf[26],in=0;
    int od=0,flag = 1;
//cin>>wq;
//cout<<wq;
   cin>>s;
     for(int i=0;i<26;i++)
        {
        buf[i]=0;
         }
         
     while(s[in]!='\0')
        {
        buf[((int)s[in])%97]++;
        in++;
    }
     for(int i=0;i<26;i++)
        {
        if(buf[i]%2!=0)
            {
            od++;
        }
        if(od>1)
            {
            flag=0;
            break;
        }
        
    }
    
    
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}

