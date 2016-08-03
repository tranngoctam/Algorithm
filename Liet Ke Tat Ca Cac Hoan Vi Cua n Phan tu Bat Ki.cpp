#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int a[20],n,count,stop,x[20];
void init()
{
	count=0;stop=0;
	cout<<"n=";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	
     	a[i]=i;
	
		cout<<"nhap cac phan tu cua x"<<i<<" ";
		cin>>x[i];
  	}
}
void swap(int& a,int& b)
{
	int c=a;
	    a=b;
	    b=c;
}
void output()
{
	count++;
	cout<<count<<") ";
	for(int i=0;i<n;i++)
	cout<<x[a[i]]<<" ";
	cout<<"\n";
	if(count%20==0)
	{
		cout<<"nhan phim bat ki de tiep tuc !";
		cout<<"\n";
		getch();
	}
}
void generate()
{
	int i=n-2;
	while(i>=0 && a[i]>a[i+1])
	i--;
	if(i<0)
	stop=1;
	else
	{
		int k=n-1;
		while(a[i]>a[k])
		k--;
		swap (a[i],a[k]);
		int r=n-1,s=i+1;
		while(r>s)
		{
	     	swap(a[r],a[s]);
		    r--;s++;
      	}
    }
}
void numerate()
{
	init();
	while(!stop)
	{
		output();
		generate();
		
	}
}
int main()
{
	int m,n;
	numerate();
	getch();
}
