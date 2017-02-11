#include<iostream>
#include<list>
using namespace std;

class Fptr
{
public:
	void (*we)();
	int asd;
	void ex()
	{
		(*we)();
	}

};
list<Fptr> clist;
list<Fptr>::iterator h;
void function()
{
	cout<<"Its function"<<endl;

}
void g()
{
cout<<"Another function\n";
}
int main()
{
	void (*f)();
	f=&function;
	clist.push_back(Fptr());
	clist.push_back(Fptr());
	h=clist.begin();
	h->asd=10;
	h->we=f;
	f=&g;
	h++;
	h->asd=13;
	h->we=f;
	h=clist.begin();
	h->ex();
	h++;
	h->ex();
	cout<<&function<<endl;
	cout<<&g<<endl;
	//cout<<h->asd;
}