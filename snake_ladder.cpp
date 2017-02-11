#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
struct node
{
	short val,dis;
	struct node *ldr=NULL;
	struct node *snk=NULL;
}sqr;
struct ladr
{
	int st,en;
}ll;

int main() 
{
int t,l,s,e;
char num[10],buf[1000];
cin>>t;
while(t--)
{
vector <struct node> map(100);
vector <struct node>::iterator i;
vector <struct ladr> ladder;
vector <struct ladr> snake;
vector <struct ladr>::iterator li;
vector <int> laddder;


int m=0,flag=0,st=0,en=0,nl=0,ns=0;
cin>>num;
while(num[m]!='\0')
{
	if(num[m]==',')
	{
		flag=1;
		m++;
	}
	if(flag==0)
	{
		st=st*10+((int)num[m])%48;
	}
	else
	{
		en=en*10+((int)num[m])%48;
	}
	m++;
}
nl=st;ns=en;
//////////////////////////////Inserting Ladder info
for(int ii=0;ii<nl;ii++)
	{
			st=en=m=flag=0;
			cin>>buf;
			while(buf[m]!='\0')
			{
				if(buf[m]==',')
				{
					flag=1;
					m++;
				}
				if(flag==0)
				{
					st=st*10+((int)buf[m])%48;
				}
				else
				{
					en=en*10+((int)buf[m])%48;
				}
				m++;
			}
					ll.st=st-1;
					ll.en=en-1;
					ladder.push_back(ll);
	}

// for(li=ladder.begin();li!=ladder.end();li++)
// {
// 	cout<<li->st<<"  ";
// }

//////////////////////////////////Inserting Snake info
for(int ii=0;ii<ns;ii++)
	{
			st=en=m=flag=0;
			cin>>buf;
			while(buf[m]!='\0')
			{
				if(buf[m]==',')
				{
					flag=1;
					m++;
				}
				if(flag==0)
				{
					st=st*10+((int)buf[m])%48;
				}
				else
				{
					en=en*10+((int)buf[m])%48;
				}
				m++;
			}
					ll.st=st-1;
					ll.en=en-1;
					snake.push_back(ll);
	}
				// for(li=snake.begin();li!=snake.end();li++)
				// {
				// 	cout<<li->st<<"  ";
				// }

				int y=0;
				for(i=map.begin();i!=map.end();i++)
				{
					i->val=y++;
					i->dis=200;

				}
				
				for(li=ladder.begin();li!=ladder.end();li++)
				{
					map[li->st].ldr=&map[li->en];
				}
				// for(i=map.begin();i!=map.end();i++)
				// {
				// 	if(i->ldr!=NULL)
				// 	{
				// 		cout<<"Value updated : "<<i->val<<" to "<<i->ldr->val<<endl;
				// 	}
				// }
				for(li=snake.begin();li!=snake.end();li++)
				{
					map[li->st].snk=&map[li->en];
				}
				// for(i=map.begin();i!=map.end();i++)
				// {
				// 	if(i->snk!=NULL)
				// 	{
				// 		cout<<"Snake Value updated : "<<i->val<<" to "<<i->snk->val<<endl;
				// 	}
				// }
////////////////////////////Calculating distance
				i=map.begin();
				i->dis=0;
				int yy=0;
				for(i=map.begin();i!=map.end();i++)
				{	
				//	cout<<yy++<<endl;
					if(i!=map.begin()&&i->dis>((i-1)->dis)+1)
					{
					//	cout<<"Here  : "<<(i-1)->dis<<endl;
						i->dis=((i-1)->dis)+1;
					}
					if(i->ldr!=NULL)
					{
					//	cout<<"Ladder is not NULL\n";
					//	cout<<	i->ldr->dis<<"  "<<i->dis+1<<endl;

						if(i->ldr->dis>i->dis)
						{
							i->ldr->dis=i->dis;	
						}
					}
					if(i->snk!=NULL)
					{
					//	cout<<"Snake is not NULL\n";
						if(i->snk->dis>i->dis)
						{
							
							i->snk->dis=i->dis;	
						}
					}
					
				}
				//cout<<endl;
				// for(i=map.begin();i!=map.end();i++)
				// {
				// 	cout<<i->dis<<"  ";
				// }
				//cout<<endl;
				cout<<floor(map[99].dis/6)+1<<endl;

}

 return 0;
}

