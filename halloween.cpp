#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t,n;
    double q;
    cin>>t;
    while(t--)
        {
        cin>>n;
       // cout<<"n is : "<<n<<endl;
        q=floor(n/2);
        //cout<<"Its half : "<<q<<"\n";
        if(n%2==0)
            {
            cout<<q*q<<"\n";
        }
        else
            {
            cout<<q*(q+1)<<"\n";
        }
    }
    
    return 0;
}

