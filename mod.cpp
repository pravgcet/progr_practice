#include<iostream>
using namespace std;
int main()
{
	int i=-1,ans=-1;
	for(;i>-10;i--)
	{
		cout<<i<<" mod 6 : "<<i%6<<endl;
	}
	i=-7;
	while(i<0)
	{
		i=i+6;
	}
	cout<<"mod value is : "<<i<<endl;

}