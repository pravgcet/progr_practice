#include<iostream>
#include<string>
using namespace std;
int main()
{
int t,i=0,l,cnt=0;
string str;
cin>>t;


while(t-->0)
	{
	cnt=0;
	i=0;
	cin>>str;
	l=str.length();

		while(i<l)
		{
			if(str[i]=='A' || str[i]=='D'|| str[i]=='O' || str[i]=='P' || str[i]=='Q' ||str[i]=='R')
				{
					cnt=cnt+1;
				}
			else
			{
				if(str[i]=='B')
					{
						cnt=cnt+2;
					}
			}
			i++;
		}
	//cout<<str<<"  ";
	cout<<cnt<<endl;

	}
}
