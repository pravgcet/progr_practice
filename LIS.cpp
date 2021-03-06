#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
// Binary search (note boundaries in the caller)
// A[] is ceilIndex in the caller
int CeilIndex(int A[], int l, int r, int key)
{
    int m;
    while( r - l > 1 )
    {
        m = (l + r)/2;
        
        (A[m] >= key ? r : l) = m; // ternary expression returns an l-value
    }
 
    return r;
}
 
int LongestIncreasingSubsequenceLength(int A[], int size)
{
    // Add boundary case, when array size is one
    int *tailTable   = new int[size];
    int len; // always points empty slot

    memset(tailTable, 0, sizeof(tailTable[0])*size);
 
    tailTable[0] = A[0];

    len = 1;

    for( int i = 1; i < size; i++ )
    {
        if( A[i] < tailTable[0] )
            // new smallest value
            tailTable[0] = A[i];
            
        else if( A[i] > tailTable[len-1] )
            // A[i] wants to extend largest subsequence
            tailTable[len++] = A[i];
            
        else
            // A[i] wants to be current end candidate of an existing subsequence
            // It will replace ceil value in tailTable
            tailTable[CeilIndex(tailTable, -1, len-1, A[i])] = A[i];
    }
 
    delete[] tailTable;
 
    return len;
}
/* Driver program to test above function */
int main()
{
  // = {5,1,6,2,4,3,7,0,8};
	
  int n;// = sizeof(arr)/sizeof(arr[0]);
  scanf("%d",&n);
  int arr[n],i;
  for(i=0;i<n;i++)
  {
  	scanf("%d",&arr[i]);
  }
  
  printf("Length of Longest Increasing Subsequence is %d\n",
            LongestIncreasingSubsequenceLength(arr, n));
 
  return 0;
}
