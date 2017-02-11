#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
int n,e,ne,st,end,hrs,mins,mine,hre;
cin>>e>>n;
ne=e;
char hs1,hs2,ms1,ms2,sp,he1,he2,me1,me2;
int ihs1,ihs2,ims1,ims2,isp,ihe1,ihe2,ime1,ime2;

int m[e][2],cnt=0;

for(int i=0;i<e;i++)
{
m[i][0]=0;
m[i][1]=0;
	
}


while(n--)
{
	cin>>hs1;cin>>hs2;cin>>sp;cin>>ms1;cin>>ms2;
	cin>>he1;cin>>he2;cin>>sp;cin>>me1;cin>>me2;
	ihs1=int(hs1)-48;

	//cout<<"hs1 is "<<hs1<<endl;
	ihs2=int(hs2-'0');
	//cout<<"hs2 is "<<hs2<<endl;
	ims1=int(ms1-'0');
	ims2=int(ms2-'0');

	ihe1=int(he1-'0');
	ihe2=int(he2-'0');
	ime1=int(me1-'0');
	ime2=int(me2-'0');

hrs=ihs1*10+ihs2;
mins=ims1*10+ims2;
//cout<<"hrs is : "<<hrs<<endl;
hre=ihe1*10+ihe2;
mine=ime1*10+ime2;

if(hrs>=0&&hrs<8)
{
	hrs+=12;
}

if(hre>=0&&hre<=8)
{
	hre+=12;
}

st=hrs*100+mins;
end=hre*100+mine;


for(int i=0;i<e;i++)
{

		if(m[i][0]==0)
		{
			cnt++;
			m[i][0]=st;
			m[i][1]=end;
			break;
		}
		else if(m[i][1]<=st)
		{
			cnt++;
			m[i][0]=st;
			m[i][1]=end;
			break;
		}

	}
}

cout<<cnt<<endl;





    return 0;
}
