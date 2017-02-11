#include<iostream>
#include<string>
using namespace std;
int main()
{
int t,var,cnt,tvar,tcnt,l,i,j;
string str;
char c;
cin>>t;
while(t-->0)
	{
		cin>>str;
		l=str.length();
		cnt=0;
		for(i=0;i<l;i++)
		{
			tcnt=0;
			c=str[i];
			if(c!='\0')
			{
			for(j=i;j<l;j++)
			{	
				if(c==str[j]){tcnt++;str[j]='\0';}
			}
			if(tcnt%2==0)
			{
				cnt=cnt+tcnt/2;
			}
			else 
			{
				cnt=cnt+(tcnt/2)+1;
			}
			}
		}
cout<<cnt<<endl;

	}



}
