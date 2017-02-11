#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;
int main()
{
int t;
    cin>>t;

while(t--)
{
unsigned long long int n,j;
cin>>n;
int cnt=0;
 bool d=0,yd=0,turn=0;

if(n==1)
{
cout<<"Richard"<<endl;
}

else
{

while(1)
{
	if(!turn)
		{
			cout<<"Louise  : "<<n<<"  :  ";
			j=n;
			cnt=0;
		    d=0;yd=0;
							while(j>0)
											{
											if(j%2==1)
												{
												j--;
												cnt++;
												}
												else
												{
												j=j/2;
												}
											}
			if(cnt==1)
			{
				n=n/2;
			//	cout<<"N is : "<<n<<endl;
				cout<<"Its power of 2"<<endl;
				yd=1;
				turn=1-turn;
			}
			else
			{
				for(int i=1;i<64;i++)
				{
					if(pow(2,i)<n&&pow(2,i+1)>n)
					{
						n=n-pow(2,i);
			//			cout<<"N 2nd loop is : "<<n<<endl;
						cout<<"Its not power of two"<<endl;
						yd=1;
						turn=1-turn;
						break;
					}
				}
			}
			//cout<<"Turn  is : "<<turn<<endl;
			cout<<n<<endl;
			if(n==1)
			{
			cout<<"Louise"<<endl;
			break;	
			}
		}
else
					{
						cout<<"Richard   "<<n<<"   :  ";
						j=n;
						cnt=0;
					    	d=0;yd=0;
										while(j>0)
											{
											if(j%2==1)
												{
												j--;
												cnt++;
												}
												else
												{
												j=j/2;
												}
											}
						//cout<<"Bits N :"<<bitset<256>(n)<<endl;
						//cout<<"Count is :"<<cnt<<endl;
						if(cnt==1)
						{
							n=n/2;
						//	cout<<"N is : "<<n<<endl;
					cout<<"Its power of 2"<<endl;
							yd=1;
							turn=1-turn;
						}
						else
						{
							for(int i=1;i<64;i++)
							{
								if(pow(2,i)<n&&pow(2,i+1)>n)
								{
									n=n-pow(2,i);
						//			cout<<"N 2nd loop is : "<<n<<endl;
							cout<<"Its not power of two"<<endl;
									yd=1;
									turn=1-turn;
									break;
								}
							}
						}
						//cout<<"Turn  is : "<<turn<<endl;
					cout<<n<<endl;	
						if(n==1)
						{
						cout<<"Richard"<<endl;
						break;	
						}
						
					}
}





	
}
	



}

 
    return 0;
}

