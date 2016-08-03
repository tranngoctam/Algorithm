#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	int k=0,dem=0,vt=0;
	int *p,*p1,n;
	cout <<"nhap so phan tu = ";
	cin >>n;
	p=new int[n];
	for (int i=0;i<n;i++)
	{
		cout <<"nhap phan tu thu " << i <<" " ;
		cin >>p[i];
		
	}
	int *tam=p;
	for(int j=0;j<n;j++)
	{
		if(p[j]>0)
		{	
		   k=k+1;
		   if(j==n-1)
		   {
			if(dem<k)
			{
				dem=k;
				vt=j+1;
			}
		   }
		   
	    }
	    else
	    {
	    	if(dem<k)
	    	{
	    	
	    	  dem=k;
	    	 
	    	  vt=j;
            }
             k=0;
	    }
	    	
	}
	 p1=new int[dem];
//	 cout<<dem;
	for(int i=vt-dem;i<=vt-1;i++)
	cout<<tam[i]<<" ";
	
	getch();
}
