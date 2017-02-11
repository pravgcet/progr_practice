#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
void insertionSort(int ar_size, int *  ar) 
{
int t,in; 

for(int k=1;k<ar_size;k++)
{

	if(ar[k]<ar[k-1])
	{
	//cout<<"In if part  "<<k<<" \n";
		t=ar[k];
		in=k;
	while(t<ar[in-1])
	{
	
		ar[in]=ar[in-1];
		//cout<<"In while  "<<ar[in]<<"\n";
		in--;
	}
		ar[in]=t;
	}
for(int i=0;i<ar_size;i++)
{
cout<<ar[i]<<" ";
}
cout<<endl;
}
}



int main(void) 
{
   
    int _ar_size;
    cin >> _ar_size;
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
   }

   insertionSort(_ar_size, _ar);
   
   return 0;
}

