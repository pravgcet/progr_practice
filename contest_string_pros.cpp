#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() 
{
int t;
    cin>>t;
    basic_string<char> x,y;
    while(t--)
    {
        ////////////////////////////////////X coor
       double xx=0;
       int s,dec=0,dp=1;
        char sign;
        cin>>x>>y;
           double yy=0;
       int sy,decy=0,dpy=1;
        char signy;
        if(y[0]=='+'||y[0]=='-')
            {
            sy=1;signy=y[0];
        }
        else
            {
            sy=0;
        }
       if(x[1]=='+'||x[1]=='-')
            {
            s=2;sign=x[1];
        }
        else
            {
            s=1;
        }
        if((x[s]=='0'&&x[s+1]!='.')||(y[sy]=='0'&&y[sy+1]!='.')||(x[x.length()-2]=='.'||y[y.length()-2]=='.'))
            {
              cout<<"Invalid"<<endl;
            }
            else
            {
      for(int i=s;i<=x.length();i++)
          {
                  
            
                   if(x[i]==',')
                    {
                        break;
                    }
                        if(x[i]=='.')
                            {
                            dec=1;
                          continue;
                           }
        //  cout<<i<<"    "<<xx<<endl;
                          if(dec)
                              {
                              int y=x[i]-'0';
                              double u = double(y)/(pow (10,dp));
                              //cout<<"y == "<<y<<"  u : "<<u<<endl;
                                      xx=xx+u;
                                      dp++;
                             }
                            else
                                {
                                      xx=xx*10+(x[i]-'0');
                               }
          }
           if(s==2)
            {
            if(sign=='-')
                {
                 xx*=-1;     
            }
           
        }
   //     cout<<xx<<endl;
////////////////////////////////////////////////////y coordinates
      for(int i=sy;i<=y.length();i++)
          {
                  
            
                   if(y[i]==')')
                    {
                        break;
                    }
                        if(y[i]=='.')
                            {
                            decy=1;
                          continue;
                           }
         //cout<<i<<"    "<<yy<<endl;
                          if(decy)
                              {
                              int ey=y[i]-'0';
                              double uy = double(ey)/(pow (10,dpy));
                          //   cout<<"yy == "<<yy<<"  u : "<<uy<<endl;
                                      yy=yy+uy;
                                      dpy++;
                             }
                            else
                                {
                                      yy=yy*10+(y[i]-'0');
                               }
          }

        

          if(sy==1)
            {
            if(signy=='-')
                {
                 yy*=-1;     
            }
           
        }
//cout<<xx<<"    "<<yy<<endl;
if(xx>=-90&&xx<=90&&yy>=-180&&yy<=180)
{
  cout<<"Valid"<<endl;
}
else
{
  cout<<"Invalid"<<endl;
}





}             
    }
    return 0;
}
