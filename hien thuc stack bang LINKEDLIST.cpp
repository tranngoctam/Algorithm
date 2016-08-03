#include <iostream>
using namespace std;
#include <conio.h>
int pos;int stack[20];
struct node
{
	int value;
	node *next;
};
node *p;
struct node* insert(node *tam,node*head)
{
	
	
	
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
	return head;
		
}
struct node* initialize()
{
	node *head=NULL;
	node *tam;
	node *p;
	for(int i=1;;i++)
	{
		tam=new node;
		cout<<"nhap value"<<i<<"= ";
		cin>>tam->value;
		if(tam->value==0) break;
		tam->next=NULL;
		head=insert(tam,head);		
	}
	return head;	
}
void inketqua(node *head)
{
	struct node*ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->value<<" ";
		ptr=ptr->next;
	}
}
int main()
{
	node *head=initialize();
	inketqua(head);
}

