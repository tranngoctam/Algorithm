/*tao 1 struct 1 con so
tao dslk rong thi dung lai
chen so vao sao cho van tang dan*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct so
{
	int n;
	so *next;
};
int main()
{
	
	so *dslk=NULL;
	so *tam;
	for(int i=0;;i++)
	{
		cout<<"nhap so thu "<<i+1<<" ";
		tam=new so;
		cin>>tam->n;
		if(tam->n==0)break;
		tam->next=NULL;
		if(dslk==NULL)
		dslk=tam;
		else
		{
			tam->next=dslk;
			dslk=tam;
		}
	}
	so *chen;
	chen=new so;
	cout<<"nhap so chen";
	cin>>chen->n;
	chen->next=NULL;
	so *tam1=dslk;
	//so *tam2=tam1->next;
	for(tam1;tam1->next!=NULL;tam1=tam1->next)
	for(so *tam2=tam1->next;tam2!=NULL;tam2=tam2->next)
	{
		if(tam1->n>tam2->n)
		{
			int t=tam1->n;
			tam1->n=tam2->n;
			tam2->n=t;
		}
	}
/*	while(dslk!=NULL)
	{
		cout<<dslk->n<<" ";
		dslk=dslk->next;
	}
	getch();*/
	so *tam3=dslk;
	dslk=tam3;
//	for(tam3;tam3!=NULL;tam3=tam3->next)
    while(tam3->next!=NULL)
	{
		if(tam3->n>chen->n&&tam3->next->n>chen->n&&tam3->next!=NULL)
		{
			chen->next=dslk;
			dslk=chen;
			break;
		}
		else
		{
		
	
		    if(tam3->n<chen->n&&tam3->next->n>chen->n&&tam3->next!=NULL)
		    {
				
			   chen->next=tam3->next;
			   tam3->next=chen;
			   break;
			
		    }   
		    tam3=tam3->next;
		    if(tam3->n<chen->n&&tam3->next==NULL)
		    {
		    	tam3->next=chen;
		    	tam3=tam3->next;
		    	break;
		    }
		}
	}
	while(dslk!=NULL)
	{
		cout<<dslk->n;
		dslk=dslk->next;
	}
	getch();
	
}


