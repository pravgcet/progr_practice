#include<iostream>
#include<string>
using namespace std;
int main()
{
int sw,n,m,cnt,i,indi,indj,l,val;
cin>>n>>m;
string str;
int a[200000];
getline(cin,str);
getline(cin,str);
l=str.length();
char c;
int k=1;
a[1]=0;

	for(i=0;i<l;i++)
		{
			c=str[i];
			if(c!=' '&&c!='\n')
			{
			val=(int)c%48;	
			a[k]=a[k]*10+val;
			}
			else
			{k++;
			a[k]=0;
			}				
			
		}

	while(m-->0)
		{
			cin>>indi>>indj;
			cnt=0;

			sw=a[indi];
			a[indi]=a[indj];
			a[indj]=sw;

			for(i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
					{
						if(a[i]>a[j]){cnt++;}		
			
					}


			}
		cout<<cnt<<endl;

		sw=a[indi];
		a[indi]=a[indj];
		a[indj]=sw;


		}

}


