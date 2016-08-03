#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
	int x,a[20],s,dem=0,tam=0;
	cout<<" nhap so ";
	cin>>x;
	while(x>0)
	{
		dem=dem+1;
		s=x%10;
		for(int i=tam;i<dem;i++)
		a[i]=s;
		x=x/10;
		tam=tam+1;
	}
	cout<<"so duoc dao nguoc lai"<<" ";
	for(int i=0;i<tam;i++)
	cout<<a[i];
	getch();
}
