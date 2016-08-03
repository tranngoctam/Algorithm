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
	long a[50000];
	ifstream fin("number.txt");
	
	for(long i=0;i<50000;i++)
	{
		fin>>a[i];
	}	
	fin.close();

	for(long i=0;i<50000;i++)
	{
		int vt=i;
		int min=a[i];
		for(long j=i+1;j<50000;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				vt=j;
			}
		}
		swap(a[vt],a[i]);
	}
	for(long i=0;i<50000;i++)
	{
		cout<<a[i]<<" ";
	}
	
	cout<<"\n";
	for(long i=0;i<50000;i++)
	{
		cout<<a[i]<<" ";
		
	}
	
}

