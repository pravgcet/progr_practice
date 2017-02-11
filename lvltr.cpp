#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int strlength(char *q)
    {
    int len=0;
    while(q[len]!='\0')
        {
        len++;
    }
    return len;
    }

int main() 
{
    int n,nc=0,len=0;
    char buf[10000],*st,*en;
    cin>>n;
    while(n--)
        {
        nc=0;
        cin>>buf;
        len=strlength(buf);
        st=&buf[0];
        en=&buf[len-1];
        while(st<en)
            {
            
            if(((int)(*st))>((int)(*en)))
                {
                    nc+=((int)(*st))-((int)(*en));
            }
            else
                {
                nc+=((int)(*en))-((int)(*st));
                cout<<"In else "<<*st<<"  "<<*en<<"\n";
            }
            st++;en--;
            }
        cout<<nc<<"\n";
        
    }
    return 0;
}

