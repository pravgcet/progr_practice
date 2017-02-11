#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

unsigned long long int *ar,i,rn(int);
int main()
{
int t;
cin>>t;
int pr[]={2,3,5,7};
while(t--)
{
	int n;
	cin>>n;
	if(n==1 || n == 2)
	{
		cout<<1024<<endl;
	}
	else
	{
		unsigned long long int vrn;
		ar=new unsigned long long int [n+1];
			memset(ar,0,(n+1)*sizeof(unsigned long long int));
		ar[0]=ar[1]=ar[2]=1;
		ar[3]=ar[4]=3;
		ar[5]=ar[6]=15;
		ar[7]=ar[8]=ar[9]=105;
		vrn=rn(n);
		cout<<vrn<<endl;
	

	}



}
    return 0;
}

unsigned long long int rn(int n)
{
		


		if(ar[n]>0)
		{ 
			//cout<<"returning R("<<n<<") : "<<ar[n]<<endl;
			return ar[n];
		}
		else
		{
		int a,s,d,vr;
		unsigned long long int f,sc,tp;
	//	cout<<"n is : "<<n<<endl;
		a=ceil(n/4.0);s=ceil(n/5.0);d=ceil(n/10.0);
		
		
			f=rn(s);
			sc=rn(d);
			tp=(pow(2,a)-(pow(2,a)/1000000000)*1000000000);
		// 	cout<<"tp is : "<<tp<<endl;

		// cout<<"a : "<<a<<endl;
		// cout<<"s : "<<s<<endl; 
		// cout<<"d : "<<d<<endl;
		// 	cout<<"f : "<<f<<endl;
		// 	cout<<"sc : "<<sc<<endl;
			ar[n]=f*sc;
			cout<<ar[n]<<endl;
			//ar[n]=ar[n]%1000000000;
			//cout<<"In else part ar["<<n<<"] :"<<ar[n]<<endl;
			
			return ar[n]; 	
		}

}




