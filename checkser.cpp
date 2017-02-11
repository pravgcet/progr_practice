#include <cstdlib>
#include <string>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <stdbool.h>
#include <openssl/sha.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <netdb.h>
#include <iostream>
#include <stdio.h>
#include "player1.cpp"
#include <unistd.h>
#include <stdio_ext.h>
using namespace std;
extern int fd,myport,servport,pid,Ateam;
extern struct sockaddr_in myadr,othadr,adr2,adr3;
extern struct ifreq ifr;
extern char myip[25];
extern char buffer[100],servaddr[20],servadddr[30];
char c;
socklen_t len;
struct net
{
int nport;
char nip[20];
}table[2];



void *receive(void *m);
int main()
{
bool s;
void *m;
pthread_t e[1];
table[0].nport=4567;
strcpy(table[0].nip,"10.203.148.132");
table[1].nport=5678;
strcpy(table[1].nip,"10.203.148.132");

cout<<"if you are server then enter 1 else 0\n";
cin>>s;
while((c=cin.get())!='\n');
if(s)
{
network();
cout<<"Your ip address : "<<myip<<"   and port \n"<<myport<<endl;
table[0].nport=myport;
strcpy(table[0].nip,myip);
pid=0;
}
else
{
cout<<"Give port number and server address\n";
//while((c=cin.get())!='\n');
__fpurge(stdin);

cout<<"Now give\n";
fgets(servadddr,30,stdin);
servaddr[4]='\0';
servport=atoi(servadddr);
strcpy(servaddr,servadddr+5);
othadr.sin_family=AF_INET;
othadr.sin_addr.s_addr=inet_addr(servaddr);
othadr.sin_port=htons(servport);
cout<<"Server ip is : \n"<<servaddr<<endl;
cout<<"Server port : \n"<<servport<<endl;
cout<<"Server ip is : \n"<<servaddr<<endl;
network();
cout<<"My ip and port is "<<myip<<"  "<<myport<<endl;
table[1].nport=myport;
strcpy(table[1].nip,myip);
pid=1;
len=sizeof(othadr);
cout<<"Give some input to send : \n";
buffer[0]='A';
buffer[1]=(char)pid;
sendto(fd,buffer,100,0,(struct sockaddr*)&othadr,len);


}

pthread_create(&e[0],NULL,receive,m);
while(1);
return 0;
}

void *receive(void *m)
{
char t='a';
while(1)
{
//len=sizeof(adr1);
recvfrom(fd,buffer,100,0,(struct sockaddr*)&othadr,&len);
cout<<"Receiving "<<buffer<<endl;

othadr.sin_family=AF_INET;
othadr.sin_addr.s_addr=inet_addr(table[(int)buffer[1]].nip);
othadr.sin_port=htons(table[(int)buffer[1]].nport);
sleep(2);
len=sizeof(othadr);
bzero(buffer,100);
buffer[0]=t++;
buffer[1]=(char)pid;
sendto(fd,buffer,100,0,(struct sockaddr*)&othadr,len);

}
}














