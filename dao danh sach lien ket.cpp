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
void daodanhsach(PTR &First)
{
	PTR p,q;
	if(First==NULL)
	{
	
	   cout<<"ds trong"; exit(1);
	   
    }
	PTR t=First;
	if(t->next==NULL)
	{	
	  cout<<"chi co 1 phan tu";exit(1);
    }
	PTR t1=t->next;
	if(t1->next==NULL)
	{
		t1->next=t;
		First=t1;
		t->next=NULL;
		
		
	}
	else
	{
	    p=t1->next;
	    q=t;
	    q->next=NULL;
	    while(p!=NULL)
	    {
	       t1->next=q;
	       First=t1;
	       q=t1;
		   t1=p;
		   p=p->next;
	    }
    	t1->next=q;
	    First=t1;
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
	cout<<"ds ban dau: " ;xuat(First);
	cout<<"\n";
	daodanhsach(First);
	cout<<"sao khi dao ds: ";
	xuat(First);
	
	
}
