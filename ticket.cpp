#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int main() 
{
int n,m,k;
    cin>>n>>m>>k;
    int nn,mm,kk,price[k];
    char str[k][50],qu[n][50];
    kk=k;mm=m;nn=n;
    
    struct detail
    {
        int q;
        char *p;
        float money;
        struct detail *prev,*next;
    }per[nn];

    struct per_ptr
    {
        int nop;
        struct detail *ptr;

    }array[kk];

while(k)
        {
        cin>>str[kk-k];
        cin>>price[kk-k];
        k--;
    }
while(n)
        {
        cin>>qu[nn-n];
        n--;
    }
for(int i=0;i<nn;i++)
     {
        per[i].q=1;
        per[i].p=qu[i];
        per[i].money=0;
        
        if(i==0)
         {
           per[i].prev=NULL;
           per[i].next =&per[i+1];
        }
       if(i==nn-1)
       {
        per[i].next=NULL;
       }
    }
int count=0;
int qu_val=1,cntar[kk];

///////alloting queue value
    for(int j=0;j<kk;j++)
    {
        cntar[j]=0;
        for(int i=0;i<nn;i++)
        {
            if(strcmp(str[j],per[i].p)==0)
            {
                cntar[j]++;
                per[i].q=qu_val;
            }
        }
        qu_val++;
    }
////////////////setting pointer to previus matching node
   for(int i=nn-1;i>0;i--)
    {
        for (int j=i-1;j>=0;j--)
        {
            if(strcmp(per[i].p,per[j].p)==0)
            {
                count++;
                per[i].prev=&per[j];
                break;
            }
        }
    }

//    for(int i=1;i<nn;i++)
//     {
//         if()

//             if(strcmp(per[i].p,per[j].p)==0)
//             {
//                 count++;
//                 per[i].prev=&per[j];
//                 break;
//             }
//     }

cout<<"count is "<<count<<endl;

for(int i=0;i<nn;i++)
        {
                
    


        }

for(int i=0;i<nn;i++)
        {

         cout<<"\nPerson : "<<i<<"\nqueu "<<per[i].q<<endl;
              cout<<"dest : "<<  per[i].p<<endl;
               cout<<"money : "<< per[i].money<<endl;
                cout<<"prev : "<<per[i].prev<<endl;
                cout<<"next : "<<per[i].next<<endl;
        }


    return 0;
}
