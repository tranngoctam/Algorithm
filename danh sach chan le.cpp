#include<iostream>
using namespace std;
#include<conio.h>
#include <stdlib.h>
typedef struct node
{
	int info;
	struct node*next;
}*PTR;
PTR First=NULL;
PTR First1=NULL;
PTR First2=NULL;


void Insert_first(PTR &First,int x)
{
	PTR p;
	p=new node;
	p->info=x;
	p->next=First;
	First=p;
}
void nhapthemvedau(PTR &First)
{
	int x;
	while(1)
	{
		cin>>x;cout<<"\n";
		if(x==0) break;
		Insert_first(First,x);
	}
	
}
void chanle(PTR &First,PTR &First1,PTR &First2)
{
	PTR p,q;
	p=First1;
	q=First2;
	PTR t=First;
	while(t!=NULL)
	{
		if(t->info%2==0)
		{
			p->next=t;
			p=t;	
	    }
		else
		{   
		      q->next=t;
		      q=t;
		}
		t=t->next;
			
	
	}
	p->next=NULL;
	q->next=NULL;
}
void xuat(PTR &First1,PTR &First2)
{
	PTR c=First1;
	cout<<" ds chan First1 : ";
	while(c!=NULL)
	{
		cout <<c->info<<" ";
		c=c->next;
	}
		PTR l=First2;
		cout<<"ds le First2 : ";
		while(l!=NULL)
	{
		cout <<l->info<<" ";
		l=l->next;
	}
}
int main()
{

	nhapthemvedau(First);
	chanle(First,First1,First2);
	xuat(First1,First2);
}
