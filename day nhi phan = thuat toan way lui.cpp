#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int n,x[20],count=0;

void output()
{
	cout<<"\n";
	count++;
	for (int i=0;i<n;i++)
	cout<<x[i];
	if(count%20==0) 
	{
		cout<<"nhan phim bat ki de tiep tuc";
		getch();
	}
	
}
void tim(int i)
{
	for(int j=0;j<=1;j++)
	{
		x[i]=j;
		if(i==n-1)
		output();
		else
		tim(i+1);
	}
}
int main()
{
	cout<<"nhap n";
	cin>>n;
	tim(0);
}
