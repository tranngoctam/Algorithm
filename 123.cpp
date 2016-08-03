#include<iostream>
#include <fstream>
using namespace std;
int n,left,right;
void swap(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
void quicksort(int *a,int left,int right)
{
	int i,j;
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
	int a[100];
	ifstream fin ("number.txt");
	for(int i=1;i<=100;i++)
	{
	fin>>a[i];
	}
	fin.close();
	for(int i=1;i<100;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	
	quicksort(a,1,100);
	
	for(int i=1;i<=100;i++)
	{
		cout<<a[i]<<" ";
	}
}
