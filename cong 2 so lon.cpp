#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
	int *p,n,*p1,m,a[100];
	cout<<"nhap n ";
	cin>>n;
	cout<<"nhap m ";
	cin>>m;
	p=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"nhap phan tu thu"<<i<<" ";
		cin>>p[i];
	}
	p1=new int[m];
	for(int i=0;i<m;i++)
	{
		cout<<"nhap phan tu thu"<<i<<" ";
		cin>>p1[i];
	}
int k=0,nho=0;
	for(int i=n-1;i>=0;i--)
	{
		if(m>=1)
		{
		
		  a[k]=p[i]+nho+p1[m-1];
		  if(a[k]>=10&&i>0)
		  {
			a[k]=a[k]-10;
			nho=1;
		  } 
		  else
		  {
		  	nho=0;
		  }
		  
	      m--;
	    }
	    else
	    {
	    	a[k]=p[i]+nho;
	    	if(a[k]>=10&i>0)
		    {
			  a[k]=a[k]-10;
			  nho=1;
		    } 
		    else
		    {
		    	nho=0;
		    }
	    }
	    k++;
		
		
		
	}
	for(int i=k-1;i>=0;i--)
	cout<<a[i];
	
	
	
}
