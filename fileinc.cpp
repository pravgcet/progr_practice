#include<stdio.h>
int main()
{
	FILE *r;
	char q[10];
	if((r=fopen("tree_PNG196.png","rb"))==NULL)
	{
		printf("Error while opening\n");
		//return 1;
	}
	else
	printf("File loaded successfully");
	
	fclose(r);
	return 0;
}
