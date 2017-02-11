#include <cmath>
#include <cstdio>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
basic_string<char> st;
while(t--)
{
cin>>st;
int cc[26],copy[26];
int i,j,k,l,m,n,anss=0,ccn,ii;
l=st.length();
//cout<<"Length is : "<<l<<endl;
for(i=1;i<l;i++)
{
	///////////////Selector
	for(j=0;j<l-i;j++)
	{
//		memset(cc,0,26*sizeof(int));
		memset(copy,0,26*sizeof(int));
		// cout<<"Substring size is : "<<i<<endl;
		// cout<<"Initial array"<<endl;
		// for(int z=0;z<26;z++)
		// {
		// 	cout<<cc[z]<<"  ";
		// }
		// cout<<endl;

		ccn=0;
		for(k=j;k<j+i;k++)
		{
			copy[(st[k]%123)-97]++;
			//ccn++;
		}
		///////////Checking
//		cout<<"Updated array"<<endl;
		// for(int z=0;z<26;z++)
		// {
		// 	cout<<cc[z]<<"  ";
		// }
		// cout<<endl;
		///////verifier
            //int sv=ccn;
		for ( ii = j+1; ii < l-i+1; ii++)
		{
            ccn=i;
            for(int z=0;z<26;z++)
				{
					cc[z]=copy[z];
				}
			for(m=ii;m<ii+i;m++)
			{
				if(cc[(st[m]%123)-97]>0)
				{
//					cout<<"Match"<<endl;
//                    cout<<st[m]<<endl;
					cc[(st[m]%123)-97]--;
					ccn--;
				}
			}
//			cout<<"CCN is : "<<ccn<<endl;
			if(!ccn)
			{
//				cout<<"Counted"<<endl;
				anss++;
			}	
		}

		// cout<<"Final array"<<endl;
		// for(int z=0;z<26;z++)
		// {
		// 	cout<<cc[z]<<"  ";
		// }
		// cout<<endl;

	}
	}
cout<<anss<<endl;	
}
    return 0;
}
