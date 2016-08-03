#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	int vt,gt;
	int a[5],b[6];
	cout<<"nhap vi tri";
	cin>>vt;
	cout <<"nhap gia tri";
	cin>>gt;
	for(int i=0;i<5;i++)
	{
		cout<<"nhap phan tu thu"<<i;
		cin>>a[i];
		
	}
	for(int i=0;i<6;i++)
	{
		if(i==vt)
		{
		   b[i]=gt;
		   for(int j=vt;j>=0;j--)
		   b[j-1]=a[j-1];
		   for(int k=vt+1;k<6;k++)
		   b[k]=a[k-1];
	    }
		
		
	}
	for(int i=0;i<6;i++)
	cout<<b[i]<<" ";
	
}

