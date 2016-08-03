#include<iostream>
using namespace std;
#include<conio.h>

int kt(int n,int *p)
{
	int *tam=p;
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
	cout<<"\n";
	for(int i=0;i<n-1;i++)
	{
		if(tam[i]>tam[i+1])
		return 0;
	}
	return 1;
}
int main()
{
	int n;
	cout<< " nhap n ";
	cin>>n;
	int *p;
	p=new int[n];
	for(int i=0; i<n;i++)
	{
		cout<<"nhap phan tu thu "<<i<<" ";
		cin>>p[i];
	}
	int k=kt(n,p);
	if(k==1)
	cout<<" mang co sap xep ";
	else
	cout<<"mang khong sap xep";
}
