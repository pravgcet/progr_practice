#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
long int sum=0;
    int n,m,j1,j2,can,var;
    cin>>n>>m;
    while(m--)
    {
        cin>>j1>>j2>>can;
        var=j2-j1+1;
        sum+=var*can;
     
    }
    cout<<floor(sum/n);
    return 0;
}
