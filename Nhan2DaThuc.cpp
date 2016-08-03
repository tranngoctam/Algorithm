#include<iostream>
using namespace std;
#include<conio.h>
#include <stdlib.h>
typedef struct node
{
	int heso;
	int somu;
	struct node*next;
}*PTR;
PTR First1=NULL;
PTR First2=NULL;
PTR First3=NULL;
void Insert_first(PTR &First,int x,int y)
{
	PTR p;
	p=new node;
	p->heso=x;
	p->somu=y;
	p->next=First;
	First=p;
}
void nhapthemvedau(PTR &First)
{
	int x;int y;
	for(int i=0;i<3;i++)
	{
		cin>>x>>y;cout<<"\n";
	
		Insert_first(First,x,y);
	}
	
}
void Nhan2DaThuc(PTR &First1,PTR &First2,PTR &First3)
{
	PTR p=First1;
	while(p!=NULL)
	{
		PTR q=First2;
		while(q!=NULL)
		{
			PTR r;
			r=new node;
			r->heso=p->heso*q->heso;	
			r->somu=p->somu+q->somu;
			r->next=First3;
			First3=r;
			q=q->next;
		}
		p=p->next;
	}
}
int deletegiua(PTR m)
{
	PTR n;
    n=m->next;
	m->next=n->next;
    delete n;
    
}
void congtrung(PTR &First3)
{
		PTR p=First3;
	while(p->next!=NULL)
	{
	
		PTR 
		q=p;
		while(q->next!=NULL)
		{
			if(p->somu==q->next->somu)
			{
				p->heso=p->heso+q->next->heso;
			
			    deletegiua(q);
			}
	     	else
		    q=q->next;
		}
		if(p->next!=NULL)
		p=p->next;
	}
}
void xuat(PTR First3)
{
	PTR k=First3;
	while(k!=NULL)
	{   if (k->heso !=0)
		cout<<(k->heso >0 ?" + ": " " )<< k->heso << "X^"<<k->somu;
		k=k->next;
	}
	cout<<"\n";
}
int main()
{
	nhapthemvedau(First1);
	xuat(First1);
	nhapthemvedau(First2);
	xuat(First2);
	Nhan2DaThuc(First1,First2,First3);
	xuat(First3);
	congtrung(First3);
	cout<<"=";xuat(First3);
	
}

