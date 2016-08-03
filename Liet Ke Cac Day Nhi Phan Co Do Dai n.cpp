#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int b[20],n,count,stop;
void init()
{
	
    count=0,stop=0;
    cout<<"n=";
    cin>>n;
    for(int i=0;i<n;i++)
    {
   	b[i]=0;
    }
}
void output()
{
	count++;
	cout<<count<<") ";
	for(int i=0;i<n;i++)
	{
	
	
		cout<<b[i];		
	  
	}
	cout<<"\n";
	if(count%20==0) 
	{
	    cout<<(" nhan phim bat ki de tiep tuc ! ");
	    cout<<"\n";
	    getch();
    }
}   
void generate()
{
	int i=n-1;
	while(i>=0 && b[i]==1)
	{
		b[i]=0;
		i--;
	}
	if(i<0)
	stop=1;
	else
	b[i]=1;
}
void enumerate()
{
	init();
	while (!stop)
	{
		output();
		generate();
	}
}
int main()
{
	int n;
	enumerate();
	getch();
}
