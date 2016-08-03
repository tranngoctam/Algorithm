#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <fstream>
using namespace std;
void swap (int &x,int &y)
{
	int t=x;
	    x=y;
	    y=t;
	    
}
int main()
{
	int a[20000];
	ifstream fin("number1.txt");
	
	for(int i=0;i<20000;i++)
	{
		fin>>a[i];
	}	
	fin.close();

	for(int i=0;i<20000;i++)
	{
		int vt=i;
		int min=a[i];
		for(int j=i+1;j<20000;j++)
		{
			if(a[j]<min)
			{
				min=tam[j];
				vt=j;
			}
		}
		swap(a[vt],a[i]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}*/
	cout<<dem;
	cout<<"\n";
	for(int i=1;i<=20000;i++)
	{
		cout<<a[i]<<" ";
		if(i%8==0)
		cout<<"\n";
	}
}

