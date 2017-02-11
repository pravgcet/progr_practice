#include<iostream>
#include<fstream>
#include<string>
#include<bitset>
#include<cmath>
using namespace std;
int cor=0,sd=0;
int geval(string);


int main(int a,char* par[])
{
ifstream filess;
filess.open(par[1]);
char *c;

int i,m=0;
getline(filess,c);

cout<<"Printing c : "<<c<<endl;


//c=&l;
/*while(l[m]!='\n')
{
cout<<" "<<l[m];
m++;

}

*/

//i=geval(l);
cout<<"Printing i : "<<i;

}


int geval(string c)
{
int i=0,j=0,dc=0,t,fs=0;
string d;
d=c;

while(c[j]!=' ' ||c[j]!='\n')
{
dc++;
j++;
}

dc--;
while((d[j]!=' ') || (d[j]='\n'))
{
t=(int)((d[j])%48);
i=i+pow(t,dc);
dc--;
j=j+1;
}
return i;
}





