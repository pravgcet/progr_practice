#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int a[26],l;
	char st[1000],c;
	gets(st);
//cout<<st<<endl;
l=strlen(st);
	for(int i=0;i<26;i++)
	{
		a[i]=0;
	}



	for(int i=0;i<l;i++)
	{
		int y=(int)st[i];
		if((y>=65&&y<=90))
		{
			a[y%65]=1;
		}
		if((y>=97&&y<=122))
		{
			a[y%97]=1;
		}
	}
	int f=1;

	for(int i=0;i<26;i++)
	{
		if(a[i]==0)
		{
			f=0;
		}
	}
	if(f==0)
	{
		cout<<"not pangram"<<endl;
	}
	else
	{
		cout<<"pangram"<<endl;
	}
	return 0;
}