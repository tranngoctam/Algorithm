#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3];
	for (int i=0;i<3;i++)
	for (int j=0;j<3;j++)
	{
		cout <<"\n a["<<i<<","<<j<<"]= ";
		cin >>a[i][j];
	}
	for (int i=0;i<3;i++)
	for (int j=0;j<3;j++)
	{
		cout <<"\n b["<<i<<","<<j<<"]= ";
		cin >>b[i][j];
	}

	 for (int i=0;i<3;i++)
	 for (int j=0;j<3;j++)
	 {
	 	c[i][j]=0;
	     for(int k=0;k<3;k++)
	
		c[i][j]+=	a[i][k]*b[k][j];
     }
    
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	    {
		
	 cout<<"\n c["<<i<<","<<j<<"]= "<<c[i][j];
	    }
	 
	 getch();
	 
	
	
	
	
}
