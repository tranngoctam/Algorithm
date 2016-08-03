#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int dem,x,s;
int DEM(int x)
{
	while(x)
	{
	    
		x=x/10;
		dem=dem+1;
	}
	return dem;
	
}
int doi(int x)
{
	int x1=0,s1,s=1;
	int dem=DEM(x);
	for(int i=0;i<dem-1;i++)
		s=s*10;
	while(x)
	{
		s1=x%10	;
        x1=x1+s1*s;
	    x=x/10;
	    s=s/10;
	}

    return x1;
}
int main()
{
	int x,a[20],s=1,s1,x1=0;
	cout<<" nhap so ";
	cin>>x;
	int k=x,dem=0,k1=x;
	int x2=doi(x);

	if(x2-x==0)
	cout<<" la so doi xung";
	else
	cout<<" khong phai so doi xung";

	getch();
}
