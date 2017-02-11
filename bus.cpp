#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int ar[100000],size,max;
int inp[100000],ins;

int array_agree(int n)
{
    int fac,arv,no=0;
        fac=n;
        for(int j=0;j<ins;j++)
        {
            if(fac==0){fac=n;}
            fac=fac-inp[j];
            if(fac<0)
            {
                no=1;
                break;
            }
        }
        
        if(no==1||fac>0)
        {
            return 0;
        }

         return 1;
 }



void check(int a)
    {
    int found=0;
    for(int i=0;i<size;i++)
        {
        if(a==ar[i]){found=1;}
    }
    if(found==0)
        {
        ar[size++]=a;
        //ar[size++]=b;
    }
}
void fact(int n)
    {
    int l=n/4+1;
    size=2;
    int t1,t2;
    ar[0]=1;
    ar[1]=n;
    for(int i=2;i<=l;i++)
        {
        if(n%i==0)
           {
            check(i);
            check(n/i);
           }
    }
}

int main() 
{
   int n,v,mx=-1;
       cin>>n;
       ins=n;
    long long int sum=0;
    for(int i=0;i<n;i++)
     {
        cin>>v;
        inp[i]=v;
        sum+=v;
        if(mx<v){mx=v;}
     }
    fact(sum);
    sort(ar,ar+size);



    for(int i=0;i<size;i++)
        {
        if(array_agree(ar[i]))
        {cout<<ar[i]<<" ";}
    }
  //  cout<<endl;
    
    return 0;
}
