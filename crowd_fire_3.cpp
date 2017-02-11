#include <iostream>
#include <map>
using namespace std;
int main()
{
pair <int,int > stp;
map < pair < int,int >, int > str,pro1,pro2;
map < pair < int,int >, int > :: iterator it;
int c,r,d,x,y,f,cr;
cin>>c>>r;
cr=r;
while(cr--)
{
	cin>>x>>y>>f;
	if(x<y){stp.first=x;stp.second=y;}
	else{stp.first=y;stp.second=x;}
	str[stp]=f;
}

int min=9999;

stp.first=1;
for(int i=2;i<=c;i++)
{
stp.second=i;
	if(str[stp]!=0)
	{
	pro1[stp]=str[stp];
	if(i==c){min=str[stp];}
	}
}

int df=0;


while(1)
{
cout<<"Pro 1"<<endl;
for(it=pro1.begin();it!=pro1.end();it++)
{
	cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;

stp.first=it->first.second;
df=it->second;
for(int i=stp.first+1;i<=c;i++)
{
	stp.second=i;
	if(str[stp]!=0)
	{
		pro2[stp]=(str[stp]-df>0?str[stp]-df:0)+df;
		if(i==c&&pro2[stp]<min){min=pro2[stp];}
	}
	
}
}
pro1.clear();

if(pro2.empty())
{
cout<<min<<endl;
break;
}
cout<<"Pro 2"<<endl;
for(it=pro2.begin();it!=pro2.end();it++)
{
cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;

stp.first=it->first.second;
df=it->second;
for(int i=stp.first+1;i<=c;i++)
{
	stp.second=i;
	if(str[stp]!=0)
	{
		pro1[stp]=(str[stp]-df>0?str[stp]-df:0)+df;
		if(i==c&&pro1[stp]<min){min=pro1[stp];}
	}
}
}
pro2.clear();
if(pro1.empty())
{
cout<<min<<endl;
break;
}
}
return 0;
}

