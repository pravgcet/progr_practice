
char *st[20];
co[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
i=0;

while(rso[j]!='\0')
{
	if(rso[j]=='%')
		{ 
			if((rso[j]>='65')&&(rso[j]<='89')||(rso[j]>='97')&&(rso[j]<='122'))
				{k=0;
				
					while((rso[j]!=',') || (rso[j]!=' '))
						{
						st[i][k]=rso[j];
							k++;
						}
					st[i][k]='\0';
					co[i]++;
					i++;
				}
		}
j++;
}
errs()<<"Occurrence of variables"<<"\n";
for(k=0;k<=i;k++)
{
errs()<<st[k]<<"\t"<<co[k]<<"\n";
}
