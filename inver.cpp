#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
int n=10,*ar;

for(int j=1;j<=6;j++)
{
	ar=new int [n];

for(int i=1;i<=n;i++)
{
	ar[i-1]=i;
}

for(int i=1;i<=10;i++)
{
	random_shuffle(ar,ar+n);

	for(int i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}

	cout<<endl;
}

n*=10;
}

return 0;
}
