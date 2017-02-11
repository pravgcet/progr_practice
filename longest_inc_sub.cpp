#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

bool findd(set<pair<int,int> > st,int l,int el)
{
bool bl=0;
set<pair<int,int> >::iterator it;


for(it=st.begin();it!=st.end();it++)
{
	if(it->first==l&&it->second<el){bl=1;break;}

}
return bl;

}

int main()
{

    
    pair<int,int> pr;
set<pair<int,int> > st;
set<pair<int,int> >::iterator it;
set<pair<int,int> >::reverse_iterator rit;
int n;
    cin>>n;
    int ar[n];
for(int i=0;i<n;i++)
    {
    cin>>ar[i];
}
    
    pr.first=1;pr.second=ar[0];
st.insert(pr);
    
for(int i=1;i<n;i++)
{
cout<<"Iteration :"<<i<<endl; 
set<pair<int,int> > at;

for(it=st.begin();it!=st.end();it++)
{

if(ar[i]<it->second&&it->first==1)
{
pr.first=it->first;
pr.second=ar[i];
at.insert(pr);
}
else if(!findd(st,it->first+1,ar[i])&&ar[i]>it->second)
{
at.insert(*it);
pr.first=it->first+1;
pr.second=ar[i];
at.insert(pr);
}
else if(!(findd(at,it->first,it->second)))
{
at.insert(*it);
}
}
st=at;
}
rit=st.rbegin();

cout<<rit->first;

return 0;
}



















