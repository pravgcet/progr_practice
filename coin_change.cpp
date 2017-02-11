#include <iostream>
#include <cstring>
#include <cstdlib>	
using namespace std;
int coin_count(int *c,int cs,int n)
{
	int *ar=new int [n+1];
	
	memset(ar,0,sizeof(int)*(n+1));
	/*for(int i=0;i<cs;i++)
        {
        cout<<c[i]<<"  ";
    }*/
	ar[0]=1;
	//cout<<"#f coins : "<<cs<<endl;
	
	for(int j=0;j<cs;j++)
	{
		for(int i=c[j];i<=n;i++)
		{
			ar[i]+=ar[i-c[j]];
		}
	}
    /*for(int i=0;i<=n;i++)
        {
        cout<<ar[i]<<"  ";
    }*/
	return ar[n];
}
int main()
{
	 int c[50],m=0,cn=1,a,n;
	typedef basic_string<char> String;
	String str;
	String e,s;
	while(cn)
	{
		cin>>c[m];
		cin>>e;
	//	cout<<e<<endl;
		if(e[0]!=',')
		{
			cn=0;
		}
		//cout<<c[m]<<endl;
		//cout<<e<<endl;
		//cout<<s<<endl;
		++m;
	}
	//cin>>str;
	//cout<<m<<endl;
	int q=0;
	n=0;
		while(e[q]!='\0')
		{
			//cout<<e[q]<<"  ";
			n=n*10+((int)e[q]-48);
			q++;
		
		}
     //n=atoi(e);
 // cout<<"N is "<<n<<endl;
   cout<<coin_count(c,m,n);
		
	return 0;
}			