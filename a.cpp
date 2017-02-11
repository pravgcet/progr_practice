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


int m=0,flag=0,st=0,en=0,nl=0,ns=0,num;
cin>>num;
//////////////////////////////Inserting Ladder info

for(int ii=0;ii<num;ii++)
	{
	int buf1,buf2;
			cin>>buf1;
			cin>>buf2;
			ll.st=buf1-1;
			ll.en=buf2-1;
			ladder.push_back(ll);
	}

//////////////////////////////////Inserting Snake info
cin>>ns;
for(int ii=0;ii<ns;ii++)
	{
					int buf1,buf2;
					cin>>buf1>>buf2;
					
					ll.st=buf1-1;
					ll.en=buf2-1;
					snake.push_back(ll);
	}
	
				int y=0,cnt=0;
///////////////////////////////////////////////////////////////				
				
				for(i=map.begin();i!=map.end();i++)
				{
					
               				i->dis=cnt;
               				if(y%6==0){cnt++;}
					i->val=y++;
					
			}
				
				for(li=ladder.begin();li!=ladder.end();li++)
				{
					map[li->st].ldr=&map[li->en];
				}
				
				///////////////comment this after work
				/* for(i=map.begin();i!=map.end();i++)
				 {
				 	if(i->ldr!=NULL)
				 	{
				 	 cout<<"Value updated : "<<endl<<i->val<<" to "<<i->ldr->val<<endl;
				 	}
				 }
*/		//cout<<"line 142\n";		
			for(li=snake.begin();li!=snake.end();li++)
				{
					map[li->st].snk=&map[li->en];
				}
				//comment this after work
			/*	 for(i=map.begin();i!=map.end();i++)
				 {
				 	if(i->snk!=NULL)
				 	{
				 		cout<<"Snake Value updated : "<<i->val<<" to "<<i->snk->val<<endl;
				 	}
				 }
				 */
////////////////////////////Calculating distance
				i=map.begin();
				i->dis=0;
				int yy=0;
//cout<<"line 159\n";		


//////////////comment this part after 
		/*		 for(i=map.begin();i!=map.end();i++)
				 {
				 	cout<<i->ldr->dis<<"  ";
				 }
				cout<<endl;
		*/
		
		for(i=map.begin();i!=map.end();i++)
				{	
		
		cout<<i->dis<<"   ";
		
		}			
				
				
				cout<<endl;
		
		
	                       for(i=map.begin();i<map.end();i++)
				{	
			//		cout<<yy++<<endl;
			/*		if(i!=map.begin()&&i->dis>((i-1)->dis)+1)
					{
		//				cout<<"Here  : "<<(i-1)->dis<<endl;
						i->dis=((i-1)->dis)+1;
					}
			*/
					if(i->ldr!=NULL)
					{
		         //  		cout<<"Ladder is not NULL\n";
			//			cout<<	i->ldr->dis<<"  "<<i->dis+1<<endl;
						if(i->ldr->dis>i->dis)
						{
						   i->ldr->dis=i->dis;	
						}
					}
					if(i->snk!=NULL)
					{
		//				cout<<"Snake is not NULL\n";
						if(i->snk->dis>i->dis)
						{
				         		i->snk->dis=i->dis;	
						}
					}
				}


		for(i=map.begin();i<map.end();i++)
				{	
			//		cout<<yy++<<endl;
			/*		if(i!=map.begin()&&i->dis>((i-1)->dis)+1)
					{
		//				cout<<"Here  : "<<(i-1)->dis<<endl;
						i->dis=((i-1)->dis)+1;
					}
			*/
					if(i->ldr!=NULL)
					{
		         //  		cout<<"Ladder is not NULL\n";
			//			cout<<	i->ldr->dis<<"  "<<i->dis+1<<endl;
						if(i->ldr->dis>i->dis)
						{
						   i->ldr->dis=i->dis;	
						}
					}
					if(i->snk!=NULL)
					{
		//				cout<<"Snake is not NULL\n";
						if(i->snk->dis>i->dis)
						{
				         		i->snk->dis=i->dis;	
						}
					}
				}
////////////////////////////////////////////////////////////////////////
//implementing shortest path


for(i=map.begin();i!=map.end();i++)
				{	
		
		cout<<i->dis<<"   ";
		
		}












/////////////////////////		
				
	
//cout<<"line 189"<<endl;
				// for(i=map.begin();i!=map.end();i++)
				// {
				// 	cout<<i->dis<<"  ";
				// }
				//cout<<endl;
				cout<<ceil(map[99].dis/7.0)+1<<endl;

}

 return 0;
}


