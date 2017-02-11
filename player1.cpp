#include <string>
#include <iostream>
#include <string.h>
int fd,myport,servport,pid,Ateam;
struct sockaddr_in myadr,othadr,adr2,adr3;
struct ifreq ifr;
char myip[25];
char temp[10],buffer[100],servaddr[20],servadddr[30];

//int main(int c,char **v)
void network()
{
	fd=socket(AF_INET,SOCK_DGRAM,0);
	bzero(&myadr,sizeof(myadr));
	ifr.ifr_addr.sa_family=AF_INET;
	myadr.sin_family=AF_INET;
	strncpy(ifr.ifr_name,"eth0",IFNAMSIZ-1);
	ioctl(fd,SIOCGIFADDR,&ifr);
	strcpy(myip,inet_ntoa(((struct sockaddr_in *)&ifr.ifr_addr)->sin_addr));
	std::cout<<"Give your port number :\n";
	std::cin>>myport;
	myadr.sin_port=htons(myport);
	bind(fd,(struct sockaddr *)&myadr,sizeof(myadr));
}

