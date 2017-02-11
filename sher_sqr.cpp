#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,a,b,cnt,n1,n2,ch=0,fv;
    double q;
    cin>>t;
    while(t--)
        {
        cin>>a>>b;
        cnt=0;
        ch=0;
        /////////////////////////////////b
        for(int i=a;i<=b;i++)
        {
         q=sqrt(i);
         //cout<<q<<"\n";
            if(floor(q)==ceil(q))
                {
                cnt++;
                ch++;
                if(ch==1)
                {
                    //cout<<"Forst found\n";
                    n1=i;
                }
                if(ch==2)
                {
                    n2=i;
                    break;
                }

            }
        }
fv=n2-n1;
//cout<<fv<<"\n";
//cout<<"Completed 1"<<"\n";
        int eq,tsum=0,nm;
if(n2&&n1)
{
        for(int i=1;i<b;i++)
        {
            eq=i*fv;
            //for(int x=1;x<=i;x++)
            {
                tsum=i*(i+1);
            }
            if((eq+tsum)>(b-n2))
            {
                nm=i-1;
                break;
              
            }
        }
        cout<<nm+cnt<<"\n";

}
else
{
    cout<<cnt<<"\n";
}

  //cout<<"Completed 2"<<"\n";
fv=n1=n2=0;
/////////////////////////////////////////////////////////////////this above concept is correct
    }
    
    
    return 0;
}
