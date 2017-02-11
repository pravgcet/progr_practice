#include<iostream>
using namespace std;
int topology();
void sh();
struct vert
{
int nam;
int ew;
int sp;
struct vert *next;
};
struct vert *list[8];
int ind[]={0,0,0,0,0,0,0,0};
int shp[]={0,0,100,100,100,100,100,100};
int ord[8];
int main()
{

int r;
/////////////////////////////////////////Graph 
////////////////vertex 1
struct vert t1={4,3,100,NULL};
struct vert s1={3,4,100,&t1};
struct vert f1={2,5,100,&s1};
list[1]=&f1;
///////////////////////////vertex 2
struct vert f2={7,2,100,NULL};
list[2]=&f2;
/////////////vertex 3

struct vert t3={6,3,100,NULL};
struct vert s3={5,5,100,&t3};
struct vert f3={2,2,100,&s3};
list[3]=&f3;
///////////////////////vertex 4
struct vert s4={5,6,100,NULL};
struct vert f4={2,1,100,&s4};
list[4]=&f4;
/////////vertex 5
list[5]=NULL;
////////////////////////vertex 6
//////////////////////////////////////////////cycle test
/*struct vert t6={1,6,100,NULL};
struct vert s6={7,3,100,&t6};
struct vert f6={5,1,100,&s6};
list[6]=&f6;
*/

/////////////////////////////////////////no cycle
struct vert s6={7,3,100,NULL};
struct vert f6={5,1,100,&s6};
list[6]=&f6;
//////////////////////vertex 7
list[7]=NULL;
///////////////////////////////////////////Graph defined

r=topology();
if(r==1)
{sh();}

return 0;
}

int topology()
{
vert *p;
int i;
for(i=1;i<8;i++)
{
p=list[i];
while(p!=NULL)
{
ind[(p->nam)]++;
p=p->next;
}}
cout<<"Indegree \n";
for(i=1;i<8;i++)
{
cout<<"Vertex  "<<i<<"\t"<<ind[i]<<endl;
}
int j,k=1;
for(i=1;i<8;i++)
{
for(j=1;j<8;j++)

if(ind[j]==0)
{
ind[j]=-1;
ord[k++]=j;
p=list[j];
while(p!=NULL)
{
ind[p->nam]--;
p=p->next;
}
}}

////////////////////////////cycle check
for(i=1;i<8;i++)
{if(ind[i]>0)
{cout<<"Cycle exists. Topological order does not exists";

return 0;

}}


cout<<"Topological Order is "<<endl;
for(i=1;i<8;i++)
{cout<<ord[i]<<"\t";}


return 1;
}

void sh()
{
vert *p;
int i,k;
for(i=1;i<8;i++)
{
k=ord[i];
p=list[k];
while(p!=NULL)
{
if(shp[(p->nam)]>(shp[k]+(p->ew)))
{shp[(p->nam)]=(shp[k]+(p->ew));}
p=p->next;
}
}

cout<<"\nShortest Path"<<endl;
for(i=1;i<8;i++)
{
cout<<"Shortest Path from 1 to "<<i<<"   is   "<<shp[i]<<endl;


}

}


