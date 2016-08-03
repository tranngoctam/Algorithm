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
int deletegiua(PTR m)
{
	PTR n;
    n=m->next;
	m->next=n->next;
    delete n;
    
}
void deletetrung(PTR &First)
{
	PTR p=First;
	while(p->next!=NULL)
	{
	
		PTR 
		q=p;
		while(q->next!=NULL)
		{
			if(p->info==q->next->info)
			deletegiua (q);
	     	else
		    q=q->next;
		}
		if(p->next!=NULL)
		p=p->next;
	}
		
	

	
}
void xuat(PTR First)
{
	PTR k=First;
	while(k!=NULL)
	{
		cout<<k->info<<" ";
		k=k->next;
	}
}
int main()
{
	nhapthemvedau(First);
	deletetrung(First);
	xuat(First);
	
}

