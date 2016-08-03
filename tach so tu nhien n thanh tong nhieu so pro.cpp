#include <conio.h>
#include <iostream>
using namespace std;
int n,k,x[20],count=0;
int s=0;
void Try(int i)
{
	for(int j=x[i-1];j<=n-s;j++)
	{		
		 x[i]=j;		
		 s+=j;
				
		if(s==n)
		{		
			count++;
	        cout<<count<<") ";
	        for(int k=1;k<=i;k++)
	        cout<<x[k]<<" ";
         	if(count%20==0)
        	{
	           cout<<"\n";
	           cout<<"nhan phim bat ki de tiep tuc!"; 
	           getch();
         	}
        	cout<<"\n";
     	}
		else
		{
		    if(s<=n)				
	     	Try(i+1);
	    }
	     	s-=x[i];

	}
}
int main()
{
	cout<<"n=";
	cin>>n;
	x[0]=1;
	Try(1);
//	if(count==0)
//	cout<<"PTVN";
}
