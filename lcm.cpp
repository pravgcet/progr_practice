#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
int pr[]={2,3,5,7,11,13,17,19,23,29,31,37};
int t;
cin>>t;
while(t--)
{
		int sm=-1,n,v;
		unsigned long long int lcm=1;
		cin>>n;
		if(n==1)
		{
			cout<<n<<endl;
		}
		else
		{
				for(int i=0;i<12;i++)
				{
					if(n>=pr[i])
					{
				//		cout<<pr[i]<<"  ";
						sm++;
					}
					else
					{
						break;
					}
						
				}
				while(sm!=-1)
				{
					v=pr[sm];
					//cout<<"pr is : "<<pr[sm]<<endl;
					while(1)
					{
						if(v*pr[sm]<=n)
						{
							v*=pr[sm];
						}
						else
						{
							lcm*=v;
							break;
						
						}
					}
					sm--;
				}
				cout<<lcm<<endl;
		}     
}  
    return 0;
}

