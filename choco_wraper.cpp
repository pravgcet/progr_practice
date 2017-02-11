#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n,c,wr;
    cin>>t;
    while(t--){
        cin>>n>>c>>wr;
        int an=0,wrc,wrch;
        an=n/c;
        wrc=an;
        while(wrc>=wr)
            {
            wrch=wrc/wr;
            wrc=(wrc%wr)+wrch;
            an+=wrch;
            wrch=0;                    
        }
        
       cout<<an<<endl;
        
    }
    return 0;
}

