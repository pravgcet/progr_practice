#include <iostream>
#include <time.h>

#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;
  
lli  mergeSortt(int arr[], int temp[], int left, int right);
lli merge(int arr[], int temp[], int left, int mid, int right);
lli mergeSort(int arr[], int array_size);
timespec diff(timespec start, timespec end);
  

  
int main()
{
  int *arr,n=10;

lli tim;
timespec t1,t2;


cout<<"For Randomly shuffled arrays\n";
for(int i=1;i<=6;i++)
{
	cout<<"For array size : "<<n<<endl;

	arr=new int [n];

	for(int j=1;j<=10;j++)
	{
		cout<<"Array "<<j<<" : ";

		for(int k=0;k<n;k++)
		{
			cin>>arr[k];
		}
			clock_gettime(CLOCK_PROCESS_CPUTIME_ID,&t1);		
		  cout<<mergeSort(arr, n);
		  	clock_gettime(CLOCK_PROCESS_CPUTIME_ID,&t2);		
		  cout<<"  :  "<<diff(t1,t2).tv_nsec<<endl;

	}
	n*=10;
	cout<<endl;
}
cout<<"For Sorted arrays\n";
n=10;
for(int i=1;i<=6;i++)
{
	cout<<"For array size : "<<n<<endl;

	arr=new int [n];

	for(int k=0;k<n;k++)
		{
			arr[k]=k+1;
		}
			clock_gettime(CLOCK_PROCESS_CPUTIME_ID,&t1);		
		  cout<<mergeSort(arr, n);
		  	clock_gettime(CLOCK_PROCESS_CPUTIME_ID,&t2);		
		  cout<<"  :  "<<diff(t1,t2).tv_nsec<<endl;
	n*=10;
	cout<<endl;
}

cout<<"For Soreted in Reverse order\n";
n=10;
for(int i=1;i<=6;i++)
{
	cout<<"For array size : "<<n<<endl;

	arr=new int [n];

	for(int k=0;k<n;k++)
		
			arr[k]=n-k;
		}
			clock_gettime(CLOCK_PROCESS_CPUTIME_ID,&t1);		
		  cout<<mergeSort(arr, n);
		  	clock_gettime(CLOCK_PROCESS_CPUTIME_ID,&t2);		
		  cout<<"  :  "<<diff(t1,t2).tv_nsec<<endl;
	n*=10;
	cout<<endl;
}

  return 0;
}



lli mergeSort(int arr[], int array_size)
{
    int *temp = (int *)malloc(sizeof(int)*array_size);
    return mergeSortt(arr, temp, 0, array_size - 1);
}
  
lli mergeSortt(int arr[], int temp[], int left, int right)
{
  int mid;
  lli inv_count = 0;
  if (right > left)
  {
    mid = (right + left)/2;
    inv_count  = mergeSortt(arr, temp, left, mid);
    inv_count += mergeSortt(arr, temp, mid+1, right);
  
    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}
  
lli merge(int arr[], int temp[], int left, int mid, int right)
{
  int i, j, k;
  lli inv_count = 0;
  
  i = left;
  j = mid; 
  k = left;
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
  
      inv_count = inv_count + (mid - i);
    }
  }
  
  while (i <= mid - 1)
    temp[k++] = arr[i++];
  
  while (j <= right)
    temp[k++] = arr[j++];
  
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
  
  return inv_count;
}

timespec diff(timespec start, timespec end)
{
	timespec temp;
	if ((end.tv_nsec-start.tv_nsec)<0) 
	{
		temp.tv_sec = end.tv_sec-start.tv_sec-1;
		temp.tv_nsec = 1000000000+end.tv_nsec-start.tv_nsec;
	}
	 else {
		temp.tv_sec = end.tv_sec-start.tv_sec;
		temp.tv_nsec = end.tv_nsec-start.tv_nsec;
	}
	return temp;
}
