#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
struct node
{
	char tensp[20];
	int gia;
	int giamgia;
	node *next;
};
struct node* initialize()
{
	node *head=NULL;
	node*tam;
	node*p;
	for(int i=0;i<10;i++)
	{
		tam=new node;
		fflush(stdin);
	    gets(tam->tensp);
		scanf("%d",&tam->gia);
	    scanf("%d",&tam->giamgia);
		tam->next=NULL;
		if(head==NULL)
		{
			head=tam;
			p=head;
			
		}
		else
		{
			p->next=tam;
			p=p->next;
			
		}
	}
	return head;
}
//struct node* tinhgia(node *head)
//{
//	
//}
struct node*sort(node *head)
{
	node *tam1=head;
	while(tam1->next!=NULL)
	{
		node*m=tam1;
		node*tam2=tam1->next;
		while(tam2!=NULL)
		{
			if(m->gia>tam2->gia)
			{
				m=tam2;
			
			
			}
			tam2=tam2->next;
		}
		int t=tam1->gia;
		tam1->gia=tam2->gia;
		tam2->gia=t;
		char a[20];
		strcpy(a,tam1->tensp);
		strcpy(tam1->tensp,m->tensp);
		strcpy(m->tensp,a);
	}
	tam1=tam1->next;
	
	
}
void inketqua(node *head)
{
		while(head!=NULL)
	{
		printf("%d ",head->gia);
		head=head->next;
	}
}


int main()
{
	node *head=initialize();
    
}
