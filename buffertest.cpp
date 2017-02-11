#include <iostream>
#include <strings.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(int c,char **v)
{
	char ser[20],bfr[100],t[10];
	int port=5467,news;
	bzero(ser,20);
	bzero(bfr,100);
	ser[0]='P';
	fgets(bfr,sizeof(bfr),stdin);
	cout<<ser<<endl;
	cout<<bfr<<endl;
	strcat(ser,bfr);
	sprintf(t,"%d",port);
	strcat(ser,t);
	printf("%s\n",ser);
	cout<<strlen(ser)<<endl;
	news=atoi(ser+5);
	cout<<news;

}