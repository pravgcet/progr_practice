
#include <unistd.h>  /* sleep(1) */
#include <signal.h>
#include <iostream>
#include <sys/types.h>
using namespace std;
jmp_buf cxt;
void ex_program(int sig)
{
	int c;
 cout<<"Times up. Alarm over. Understood or not\n";
 alarm(5);
 c=setjmp(cxt);
 
 
}

int main(void) 
{
 (void) signal(SIGALRM, ex_program);
 alarm(5);

 while(1)
  	{
  		
  		cout<<"Waiting \n"; sleep(1);
	}
 return 0;
}

