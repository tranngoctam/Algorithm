#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int n,m,x[20],count=0;
void output()
{
	count++;
	cout<<count<<") ";
	for(int i=1;i<=m;i++)
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
	for(int j=x[i-1]+1;j<=n-m+i;j++)
	{
		x[i]=j;
		if(i==m)
		output();
		else
		Try(i+1);
	}
}
int main()
{
	cout<<"n=";
	cin>>n;
	cout<<"m=";
	cin>>m;
	x[0]=0;
	Try(1);
}
