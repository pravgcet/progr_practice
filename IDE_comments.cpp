#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
std::string line,source,str;
    while(getline(cin,line))
        {
        source+=line+'\n';
        }
   // cout<<source.length();
int l=source.length();
bool cm=1,sl=0,ml=0,unc=0;
//cout<<source<<endl;

for(int i=0;i<l;i++)
{
char c=source[i];
if(c=='"')
{
	cm=!cm;
}


if(cm)
{
if (sl)
{
	str+=c;
	//cout<<c;
	if(c=='\n')
	{
		sl=0;
	}
}
else if(ml)
{
	str+=c;
	//cout<<c;
	if(c=='*'&&source[i+1]=='/')
	{
		str+="/\n";
		//cout<<c<<endl;
		i++;
		ml=0;
		continue;
	}
}

if(!sl&&!ml&&c=='/')
{
	if(source[i+1]=='/')
	{
		sl=1;
		i++;
		str+="//";
		continue;
		
		//cout<<"//";
	}
	else if(source[i+1]=='*')
	{
		ml=1;
		i++;
		str+="/*";
		//cout<<"/*";
		continue;
	}
}

}
}
cout<<str;
    return 0;
}



/*
if(!cm&&!sl&&!ml&&c=='/')
	{
		cm=1;str+='/';continue;
	}

if(cm&&(!sl&&!ml))
{
	if(c=='/')
		{
			sl=1;str+='/';
		}
	else if(c=='*')
	{
		ml=1;str+='/';
	}
	else
	{
		cm=0;
	}
}
else
{
	if(sl&&c=='\n')
		{
			str+=c;
			cm=sl=0;
		}
		else if(ml)
}

*/