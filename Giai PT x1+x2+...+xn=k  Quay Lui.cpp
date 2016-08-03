#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int n,k,x[20],a[20],count=0;
void output()
{
	count++;
	cout<<count<<") ";
	for(int i=1;i<=n;i++)
	cout<<x[i];
	if(count%20==0)
	{
	   cout<<"\n";
	   cout<<"nhan phim bat ki de tiep tuc!"; 
	   getch();
	}
	cout<<"\n";
}
int s=0;
void Try(int i)
{
	for(int j=0;j<=k-s;j++)
	{
		x[i]=j;
		s+=x[i];
		if(i==n)
		{
			if(s==k)
			output();
		}
		else
		{
			if(s<=k)
		
	     	Try(i+1);
	    }
	    s-=x[i];
	}
}
int main()
{
	cout<<"n=";
	cin>>n;
	cout<<"k=";
	cin>>k;
	Try(1);
//	if(count==0)
//	cout<<"PTVN";
}
