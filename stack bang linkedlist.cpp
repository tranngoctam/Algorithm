#include <iostream>
using namespace std;
#include <conio.h>
int pos;int stack[20];
struct node
{
	int value;
	node *next;
};
struct node* initialize()
{
	node *head=NULL;
	node *tam;
	for(int i=1;;i++)
	{
		tam=new node;
		cout<<"nhap value"<<i<<"= ";
		cin>>tam->value;
		if(tam->value==0) break;
		tam->next=NULL;
		if(head==NULL)
		{
			head=tam;
		}
		else
		{
			tam->next=head;
			head=tam;
		}
		
	}
	return head;

	
}
int push(node *head,int stack[20])
{
	int top=-1;
	node *tam1=head;
	do
	{
	
	   stack[++top]=tam1->value;
	   tam1=tam1->next;
    }
    while(tam1!=NULL);
    return top;
	
}
struct node* pop(node *head,int stack[20],int top)
{
	node *tam2=head;
	while(top!=-1)
	{
		tam2->value=stack[top--];
		tam2=tam2->next;
	}
	return head;
}

/*struct node* insert(int pos,node *head)
{
	
	
		if(pos==1)
		{
		//	node*tam1=head;
		//	head=tam1;
			node *tam4;
		//	tam2->next=NULL;
			tam4=new node;
			tam4->next=NULL;
			tam4->value=5;
			tam4->next=head;
			head=tam4;
		}
		else
		{
		
		
		   node *tam5=head;
		  // head=tam1;
		   for(int i=0;i<pos-2;i++)
		   {
			   tam5=tam5->next;
			
		   }
		   node *tam2;
		   tam2=new node;
		   tam2->next=NULL;
		   tam2->value=5;
		   tam2->next=tam5->next;
		   tam5->next=tam2;
	   }
	
	return head;
}
struct node*del(int pos,node *head)
{	
		node *tam3=head;
		if(pos==1)
		{
			head=head->next;			
		}
		else
		{
		   for(int i=0;i<pos-2;i++)
		   {
			tam3=tam3->next;
		   }
		   tam3->next=tam3->next->next;
	    }
    
    return head;
	
}*/
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
  int stack[20];
  node *head=initialize();
  int top=push(head,stack);
  head=pop(head,stack,top);
  inketqua(head);
  
	
}



