#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;
int comp(int li,int lv,int ri,int rv);
unsigned long long int mt[201][201];

void mat()
{
	for(int i=0;i<=200;i++)
	{
		mt[0][i]=0;
		mt[i][0]=1;
	}
	mt[0][1]=1;

	for(int i=1;i<=200;i++)
	{
		for(int j=1;j<=200;j++)
		{
			mt[i][j]=mt[i-1][j]+mt[i-1][j-1];
			mt[i][j]=mt[i][j]%1000000007;
		}
	}
}
int rightunb(int l,int n)
{
	unsigned long long int ln=0;
	//for(int i=0;i<n-l;i++)
				{
//					cout<<"n-l-1  "<<n-l-1<<"   i  "<<i<<endl; 
					ln+=mt[n-l][n-1];
				}
//		cout<<"Returning Value : "<<ln<<endl;		
	return ln%1000000007;			
}

/*
	for(int i=0;i<=10;i++)
	{
		for(int j=0;j<=10;j++)
		{
			cout<<mt[i][j]<<"    ";
		}
		cout<<endl;
	}
*/	



int main()
{
	
	basic_string<char> st;
	char ch[4];
	int n,t=0,l;
	cin>>n;
	int *a=new int [n];
	mat();
	while(t<n)
	{
		cin>>st;
		l=st.length();
		for(int i=0;i<=l;i++)
				{
					ch[i]=st[i];
				}
		if(ch[0]!='?')
		{
			a[t]=atoi(ch);
		}
		else
		{
			a[t]=-1;
		}
		t++;
	}
	/*for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}*/
	if(a[0]>0)
	{
		//cout<<"Root is not at depth 0"<<endl;
		cout<<"0"<<endl;
	}
	else
	{
		a[0]=0;
		int l=0,r=0;
		unsigned long long int num=1,ln;
		for(int i=1;i<n;i++)
		{
			//cout<<"Printing I and a[i]: "<<i<<"  "<<a[i]<<endl;
			if(a[i]>=0)
			{
				r=i;
				if(r==(l+1))
				{	
					if(a[r]-1<=a[l])
						{
							l=r;
						}
						else
						{
							cout<<"0"<<endl;
							exit(0);
						}
				}
				else
				{
		//			cout<<"Calling comp"<<endl;
					num*=comp(l,a[l],r,a[r]);
					num=num%1000000007;
					l=r;
					//cout<<"Num is : "<<num<<endl<<"l is : "<<l<<endl;
				}
			}
		}
		if(r==0)
		{
		//	cout<<"r==0"<<endl;
			if(n==1&&a[0]<=0)
			{
				cout<<"1"<<endl;
			}
			else if(n>1)
			{
				cout<<rightunb(1,n)<<endl;
			}
		}
		else
		{
			if(l<n-1)
			{
				ln=0;
				ln=rightunb(l,n);					
				num=(num*ln)%1000000007;
			}
			num=num%1000000007;
			cout<<num<<endl;
		}

	}	

	return 0;
}

int comp(int li,int lv,int ri,int rv)
{
	int n=ri-li-1,d=rv-lv,s;
		//cout<<"li : "<<li<<endl<<"ri : "<<ri<<endl<<"lv : "<<lv<<endl<<"rv : "<<rv<<endl;
		if(li==0&&rv==1)
		{
			return 1;
		}
		else if(n>=d)
		{
			return mt[n][d];
		}
		else
		{
			cout<<"0"<<endl;
			exit(0);
		}
}