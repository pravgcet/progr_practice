#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void mani(string);
int main()
{	int a,div;
	fstream f;
	f.open("batman.srt");
	string s;
	while(getline(f,s))
	{	
	//getline(f,s);
	if(s[2]==':')
	{mani(s);}	
	else
	cout<<s<<endl;
		
	}
}
	void mani(string s)
	{
		int hr,min,sec,temp,i=0;
		sec=(int) s[i+6]-'0';
		sec=(sec+5);
		temp=sec/6;
		sec=sec%6;
	//////modify
		s[i+6]=((char)sec+'0');
		min=(int)(s[i+3]-'0');
		min=min*10+(int)(s[i+4]-'0');
		hr=(int)(s[i+1]-'0');
	
		if(min==59)
			{	
				min=0;
				hr=hr+1;
			}
		else
			{	
				min=min+temp;
			}
	
		s[i+4]=((char)(min%10)+'0');
		s[i+3]=((char)(min/10)+'0');
	
	
	s[i+1]=((char)hr+'0');
	//////////////////////////////////////
	i=17;
	sec=(int) s[i+6]-'0';
	sec=(sec+5);
	temp=sec/6;
	sec=sec%6;
	///////////////////modify
	s[i+6]=((char)sec+'0');
	min=(int)(s[i+3]-'0');
	min=min*10+(int)(s[i+4]-'0');
	hr=(int)(s[i+1]-'0');
	
	if(min==59)
	{	
	min=0;
	hr=hr+1;
	}
	else
	{	
	min=min+temp;
	}
	s[i+4]=((char)(min%10)+'0');
	s[i+3]=((char)(min/10)+'0');
	s[i+1]=((char)hr+'0');
	cout<<s<<endl;
}











































