#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int dem=0,k=0,vt=0,n;
	cout<<"nhap n=";
	cin>>n;
	int *p;
	p=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"nhap phan tu thu "<<i<<" ";
		cin>>p[i];
		
	}
	for(int i=0;i<n;i++)
	{
		if(p[i]>0)
		{
			k++;
			if(dem<k)
			{
				dem=k;
				vt=i;
			}
			
			
			  
		}
		else
		k=0;
	}
	for(int i=vt-dem+1;i<=vt;i++)
	cout<<p[i];
	
}
