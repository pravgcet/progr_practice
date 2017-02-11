#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;
int comp(int li,int lv,int ri,int rv);
int main()
{
	
	basic_string<char> st;
	char ch[4];
	int n,t=0,l;
	cin>>n;
	int *a=new int [n];
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
		unsigned long long int num=1;
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
					num=num-num/1000000007;
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
			else
			{
				cout<<n-1<<endl;
			}
		}
		else
		{
			if(l<n-1)
			{
				num*=n-l;
			}
			num=num-num/1000000007;
			cout<<num<<endl;
		}

	}	

	return 0;
}

int comp(int li,int lv,int ri,int rv)
{
	int n=ri-li-1,d=rv-lv-1,s;
		//cout<<"li : "<<li<<endl<<"ri : "<<ri<<endl<<"lv : "<<lv<<endl<<"rv : "<<rv<<endl;
		if(li==0&&rv==1)
		{
			return 1;
		}
		else if(n>=d)
		{
			return 2*(n-(d-1));
		}
		else
		{
			cout<<"0"<<endl;
			exit(0);
		}
}