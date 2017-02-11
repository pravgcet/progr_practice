#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int N, K, unfairness,loc=0;
    cin >> N >> K;
    int candies[N];
    for (int i=0; i<N; i++)
        cin >> candies[i];
        
    for(int i=0;i<N;i++)
    {
    for(int j=1;j<N;j++)
    {
    if(candies[j]<candies[j-1] )
    {
    int t=candies[j];
    candies[j]=candies[j-1];
    candies[j-1]=t;
    }
    }
    }     
 //   for (int i=0; i<N; i++)
 //       cout<< candies[i]<<"\t";
    
      unfairness=candies[K-1]-candies[0];
      cout << unfairness;
    return 0;
}

