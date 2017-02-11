#include<iostream>

namespace Nothing
{
int cout=3;
}

int main()
{
cout<<Nothing::cout<<std::endl;
return 0;
}
