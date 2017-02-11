#include <iostream>
#include <cstdlib>
using namespace std;

int fun()
{
cout<<"Without main\n";
return 0;


}

void _start()
{

int y=fun();
exit(y);
}

