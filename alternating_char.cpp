#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int ne;
    double len=0,cnt;
    int ind=0,nind=0;
    char buf[100000],*p,*n,w;
    cin>>ne;
    cout<<ne<<"\n";
    while(ne--)
        {
      cnt=0;
      cin>>buf;
   cout<<buf<<"\t";
        while(buf[len]!='\0')
            {
            len++;
        }
 cout<<len<<endl; 
      /*
      //  w=std::cin.get();
       // w=std::cin.get();
       // cout<<w<<"\n";
      while(w!='\n')
          {
         // cout<<"In while loop\n";
          buf[ind]=w;
          w=cin.get();
          ind++;
          }
        buf[ind]='\0';
     	ind=0;
        //cout<<"After buffer\n";
      
      p=&buf[0];
      while(*p!='\0')
        {
          len++;
          p++;
        //  nind=len+1;
      	}
     p=&buf[0];
     cout<<len<<"\n";
      //ind=nind;
      
        p=&buf[0];
        cout<<buf<<"\n";
      if(*p=='\0')
          {
          cout<<cnt<<endl;
            }
      else
          {
          n=&buf[1];
          if(*n=='\0')
             {
                cout<<cnt<<endl;
             }
          else
              {
              for(double i=0;i<len;i++)
                  {
                  if(*p==*n)
                      {
                      cout<<"*p== "<<*p<<"\n";
                      cnt++;
                      n++;
                  }
                  else
                      {
                      p=n;
                      n++;
                  }
              }
              cout<<cnt<<"\n";
              cnt=0;
              
          }
          
      }
        
*/
        }
     

    return 0;
}

