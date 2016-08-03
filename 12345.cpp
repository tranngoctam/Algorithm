#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <fstream>
using namespace std;
long a[100000];
void docfile()
{
	ifstream fin("number.txt");
	long i;
	for( i=0;i<100000;i++)
	{
		fin>>a[i];
	}	
	fin.close();

}
void swap (int &x,int &y)
{
	int t=x;
	    x=y;
	    y=t;
	    
}
void quicksort(long a[100000],long left,long right)
{
	long i,j;
	int x=a[(left+right)/2];
	i=left;
	j=right;
	do
	{
		while(a[i]<x) i++;
		while(a[j]>x) j--;
		if(i<=j)
		{
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}while(i<j);
	if(left<j)
	quicksort(a,left,j);
	if(right>i)
	quicksort(a,i,right);

}
int main()
{
	docfile();
	quicksort(a,0,100000);
	for(long k=0;k<100000;k++)
	{
		cout<<a[k]<<" ";
	}
}

