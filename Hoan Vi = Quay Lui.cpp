#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int n,x[20],b[20],count=0;
void output()
{
	count++;
	cout<<count<<") ";
	for(int i=0;i<n;i++)
	cout<<x[i];
	if(count%20==0)
	{
	   cout<<"\n";
	   cout<<"nhan phim bat ki de tiep tuc!"; 
	   getch();
	}
	cout<<"\n";
	
	
}
void Try(int i)
{
	for(int j=0;j<n;j++)
	{
		if(b[j]==0)
		{
			b[j]=1;
			x[i]=j+1;
			if(i==n-1)
			output();
			else
			Try(i+1);
			b[j]=0;
			
		}
	}
	
	
}
int main()
{
	cout<<"nhap n= ";
	cin>>n;
	for(int i=0;i<n;i++)
	b[i]=0;
	Try(0);
}
