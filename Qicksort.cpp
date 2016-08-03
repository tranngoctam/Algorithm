#include<iostream>
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
	int *a;int n;
	cout<<"nhap n= " ;
	cin>>n;
	a=new int[n];
	for(int i=1;i<=n;i++)
	{
		cout<<"nhap phan tu thu " <<i<<" ";
		cin>>a[i];
	}
	quicksort(a,1,n);
	
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}
