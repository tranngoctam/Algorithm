#include<iostream>
using namespace std;
int main()
{
	int a[10];int vt=0,dem=0;
	for(int i =0;i<10;i++)
	{
		cin>>a[10];

	}
	for(int i=0;i<10;i++)
	{
		if(a[i]<a[i+1])
		{
			dem++;
			vt=i+1;
		}
		else
		if(dem>=2)
		{
			int b[10],k=0;
			for(int i=vt-dem+1;i<=dem;i++)
			{
			    
		    	b[k]=a[i];
		    	cout<<b[k];
		    	k++;
		    	
		    }
		    k=0;
		    vt=0;
		    dem=0;
		}
	
	}
	
}
