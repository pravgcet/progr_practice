#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <list>
#include <algorithm>

#define append_a(x) x+"a"

using namespace std;

map < string, int > func,pred;
vector <string > prog;
list <string > st;   
      
int s;

string infunc(string f,string a);

string tul(string a)
    {
    int ss=a.length();
    for(int i=0;i<ss;i++)
        {
        a[i]=tolower(a[i]);
    }
    return a;
}
string tup(string a)
    {
    int ss=a.length();
    for(int i=0;i<ss;i++)
        {
        a[i]=toupper(a[i]);
    }
    return a;
}

string rev(string a)
{
	reverse(a.begin(),a.end());
	cout<<a<<endl;
}



string apply(string f,string a)
    {
    if(f.compare(0,7,"toupper")==0){return tup(a);}
    if(f.compare(0,7,"tolower")==0){return tul(a);}
    if(f.compare(0,7,"reverse")==0){return rev(a);}
    if(f.compare(0,8,"append_a")==0){return (a+"a");}
}

void parseline(string a)
{
    istringstream is(a);
    string arg,fa;
    list <string > stt;  

list <string > ::iterator lt; 
    while(is>>a) { stt.push_front(a); }
    lt=stt.begin();
    	arg=(*lt).substr(1,(*lt).length()-2);
    lt++;

    	//cout<<"stt_size is "<<stt.size()<<endl;
    for(;lt!=stt.end();lt++)
          {
           fa=*lt;
          cout<<"fa is "<<fa<<endl;
           if(fa.length()>1)
           	{
              if(pred.find(fa)!=pred.end())
                    {

				    if(fa.compare(0,5,"print")==0){cout<<arg<<endl;}
				    else
				    {
                      // cout<<"Found in pred "<<fa<<endl;
                        arg=apply(fa,arg);
                      // cout<<"Returned "<<arg<<endl;
                    }
                    }
              else if(func.find(fa)!=func.end())
                    {
                    	//cout<<"Passing "<<fa<<" "<<arg<<endl;
                    arg=infunc(fa,arg);

                  //  cout<<"Function returned "<<arg<<endl;
                   }
                 //  cout<<"In if\n";
            }
         //   cout<<"In for\n";
        }
 }


string parsefunc(string a,string par)
{
    istringstream is(a);
    string arg,fa;
    list <string > stt;  
   //cout<<"In parse func"<<endl;
list <string > ::iterator lt; 
    while(is>>a) { stt.push_front(a); }
    lt=stt.begin();
	arg=par;
    lt++;

    for(;lt!=stt.end();lt++)
          {
           fa=*lt;
              
           if(fa.length()>1)
           {
              if(pred.find(fa)!=pred.end())
                    {

                       arg=apply(fa,arg);
                 //      cout<<"In parsefunc return "<<arg<<endl;
                    }
              else if(func.find(fa)!=func.end())
                   {	
                 //  		cout<<"Hey buddy "<<endl;
                   		arg=infunc(fa,arg);
                  // 		cout<<"In func returned "<<arg<<endl;
                   }
          }
      }
//cout<<"Function returning "<<arg<<endl;         
return arg;
}

string infunc(string f,string a)
{
//cout<<"In func "<<f <<"  "<<a<< endl;

    int found=0;
	string ar;
   	     //        cout<<"\t\tsearching for function "<<s<<endl;

        for(int ii=0;ii<s;ii++)
                {
               string h=prog[ii];
   	         //    cout<<"\t\th is "<<h<<endl;

               if(h.length()>1)
               {
   	             if(h.compare("define "+f)==0)
  	                 {
                    //	cout<<"Found function\n";
                        found=1;         
                        continue;
       	            }
       	          if((found==1)&&h.compare("end")==0){break;}   
                  if(found==1)
                       	{
                    //   		cout<<"Sending "<<h<<"  "<<a<<endl;
                            ar=parsefunc(h,a);
                          //  cout<<"Parse func returned "<<ar<<endl;
                        }
  				}
		}	
//cout<<"Returning "<<ar<<endl;		
return ar;
}

 
int main() {
string a,b,c;
    
while(getline(cin,a))
    {
        prog.push_back(a);
    }
   s=prog.size();
 for(int i=0;i<s;i++)
     {
         a=prog[i];
        if(a.compare(0,6,"define")==0)
        {
            c=a.substr(7);
            func[c]=1;
        }
     }
    pred["print"]=1;
    pred["toupper"]=1;
    pred["tolower"]=1;
    pred["append_a"]=1;
    pred["reverse"]=1;
    
    /////////////////////Parse
string arg,fa;    
int its=0;
    for(int i=0;i<s;i++)
     {
     //   cout<<i<<endl;
        a=prog[i];
        if(a.length()>1)
            {
        if(a.compare(0,6,"define")==0){its=1;continue;}
        else if(a.compare(0,3,"end")==0){its=0;continue;}
        if(its==0)
            {
            
    //        cout<<"Parsing line "<<a<<endl;
            parseline(a);       
                 
            }
            cout<<"line parsed\n";
           }
    }
    return 0;
}
