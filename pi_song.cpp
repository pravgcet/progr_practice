#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
int pi[]={3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,3};
using namespace std;
int main()
{
int tc,len,sl,ch;
cin>>tc;

char *st,*st2;
int ps;
string ss;
getline(cin,ss);
int val;
while(tc--)
{
	ch=0;ps=1;
	getline(cin,ss);
	len=ss.length();
	val=0;
	
//	cout<<"length is "<<len<<endl;
	for(int i=0;i<=len;i++)
	{
		if(ss[i]==' '||(i==len))
		{
			
//			cout<<"pi[ch] : "<<pi[ch]<<"  val is : "<<val<<endl;
			if(pi[ch++]!=val)
			{
//				cout<<"Breaking at : "<<i<<endl;
				ps=0;
				break;
			}
			val=0;
		}
		else
		{
//		cout<<" ss[" <<i<<"]  "<<ss[i]<<endl;
			val++;
		}
	}
	if(ps==1)
	{
		cout<<"It is a pi song"<<endl;
	}
	else
	{
		cout<<"Not a pi song"<<endl;
	}
}
return 0;
}



