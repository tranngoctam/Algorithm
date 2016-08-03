#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
void swap (int &x,int &y)
{
	int t=x;
	    x=y;
	    y=t;
	    
}
int main()
{
	int *p,n;
	cout<<"nhap n=";
	cin>>n;
	p= new int[n];
	for(int i=0;i<n;i++)
		{
			cout<<"nhap phan tu thu " <<i<<" ";
			cin>>p[i];
		}
		int *tam=p;
		for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			if (p[i]>p[j])
			{
			   swap(tam[i],tam[j]);	
			}
		}
		//for(int i=0;i<n;i++)
		//cout<<p[i];
		
	//	for(int i=0;i<n;i++)
	//	cout<<tam[i]<<" ";
	//	getch();
		
	  
		for(int i=0;i<n;i++)
		{
			if(tam[i]==tam[i+1])
			{
				for(int j=i;j<n;j++)
				{
				tam[j]=tam[j+1];
			    
		     	}
		     	i--;
		     	n--;
			}
		}
		for(int i=0;i<n;i++)
		cout<<tam[i]<<" ";
		getch();
		
}
