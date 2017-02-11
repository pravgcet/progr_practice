#include <iostream>
#include <string>
using namespace std;
int main()
{
bool a[26];
for(int i=0;i<26;i++)
{
	a[i]=0;
}
basic_string<char> str;
cin>>str;
int l=str.length();
///cout<<"length is : "<<l<<endl;
for(int i=0;i<l;i++)
{
	if(a[str[i]%97]==0)
	{
		a[str[i]%97]=1;

	}
	else
	{
		str[i]=65;
	}
	
}

for(int i=0;i<l;i++)
{
if(str[i]!=65)
{
	cout<<str[i];
}
}
return 0;
}