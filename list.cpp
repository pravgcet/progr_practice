#include<iostream>
#include<list>
#include<cstring>
using namespace std;

class Waste
	{
	public:
		int val,dec;
		//jmp_buf savecxt;
		Waste(int v,int d)
		{
			val=v;
			dec=d;
		}
		void exec()
		{
			cout<<"Execution is going on\n";
		}
	};


int main()
{
	

	list<Waste> name;
	list<Waste>::iterator ite,st,en;
	for(int i=1;i<15;i+=2)
	{
	cout<<name.push_back(Waste(i,50+i));
	//cout<<"Element : "<<en->val<<endl;
	}
	
	for(ite=name.begin();ite!=name.end();ite++)
	{	
		//ite=*ite.next;
		cout<<"Value  : "<<ite->val<<"   ";
		cout<<"Dec  : "<<ite->dec<<endl;
		//ite->exec();
	}
	
/*
	st=name.begin();
	name.push_back(*st);
	name.erase(st);
	cout<<"New list\n";
	for(st=name.begin();st!=name.end();st++)
	{
		cout<<"Value :"<<st->val<<endl;
	}
	st=name.begin();
	name.push_back(*st);
	name.erase(st);
	cout<<"New list\n";
	for(st=name.begin();st!=name.end();st++)
	{
		cout<<"Value :"<<st->val<<endl;
	}

	

*/

}
