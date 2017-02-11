#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

struct nettable
{
	int ns,nport,plr,Ateam;
	char nip[20];
	int x1,x2,y1,y2;
};
struct nettable table[4],table1[4];
void init();

int main()
{
char buffer[100],temp[5];
init();
for(int i=0;i<4;i++)
{
cout<<table[i].x1<<"   "<<table[i].x2<<endl;
cout<<table[i].y1<<"   "<<table[i].y2<<endl;
}
bzero(buffer,100);
buffer[0]='z';

for(int i=0;i<4;i++)
{
bzero(temp,5);
sprintf(temp,"%d",table[i].x1);
strcat(buffer,temp);
buffer[strlen(buffer)]='e';

sprintf(temp,"%d",table[i].x2);
strcat(buffer,temp);
buffer[strlen(buffer)]='e';

sprintf(temp,"%d",table[i].y1);
strcat(buffer,temp);
buffer[strlen(buffer)]='e';

sprintf(temp,"%d",table[i].y2);
strcat(buffer,temp);
buffer[strlen(buffer)]='e';

}
int num=0;
for(int i=0;i<50;i++)
{

printf("%c  ",buffer[i]);
num=(int)buffer[i];
cout<<(num-48)<<endl;

}
cout<<"\n"<<strlen(buffer);
////////Getting data from buffer
int whichis=0,indx=0;
for(int i=1;i<strlen(buffer);i++)
{
num=0;
if(buffer[i]=='-')
	{
	whichis++;
		i++;
		while(buffer[i]!='e')
		{
			num=num*10+(((int)buffer[i])-48);
			i++;
		}
		num=num*-1;
	}
else
	{
	whichis++;
		while(buffer[i]!='e')
			{	
				num=num*10+(((int)buffer[i])-48);
				i++;
				}
	}
switch(whichis)
	{
	case 1:{table1[indx].x1=num;
		break;
		}
	case 2:{table1[indx].x2=num;
		break;}
	case 3:{table1[indx].y1=num;
		break;}
	case 4:{table1[indx].y2=num;
		break;
		}
	}
	if(whichis==4)
	{
	whichis=0;
	indx++;
	}
}

for(int i=0;i<4;i++)
{
cout<<table1[i].x1<<"   "<<table1[i].x2<<endl;
cout<<table1[i].y1<<"   "<<table1[i].y2<<endl;
}
}

void init()
{
table[0].x1=-10;
table[0].x2=-9;
table[0].y1=-8;
table[0].y2=-7;


table[1].x1=-8;
table[1].x2=-7;
table[1].y1=-10;
table[1].y2=-9;

table[2].x1=7;
table[2].x2=8;
table[2].y1=9;
table[2].y2=10;

table[3].x1=9;
table[3].x2=10;
table[3].y1=7;
table[3].y2=8;


}











/*int main()
{
int a;
char buf[10];
a=-10;
sprintf(buf,"%d",a);
buf[3]='\0';
//for(int i=0;i<10;i++)
{
//if(buf[i]=='-')
{cout<<"yeah,  its minus\n";}
cout<<(int)buf<<endl;
}
}
*/



