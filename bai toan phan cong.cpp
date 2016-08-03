#include <iostream>
#include <fstream>
#include<conio.h>
using namespace std;
int c[100][100],cmin,tho[100],cost,f,x[100],xopt[100],n;
void read()
{
		ifstream hin("phancongx4.txt");
		hin>>n>>cmin;
		for(int i=1;i<=n;i++)
		{		
		    for(int j=1;j<=n;j++)
	     	hin>>c[i][j];
	    }
		hin.close();
			cout<<n<<" "<<cmin;
		cout<<"\n";
		for(int i=1;i<=n;i++)
		    for(int j=1;j<=n;j++)
		    {
     			cout<<c[i][j]<<" ";
     			if(j==4)
     			cout<<"\n";
		    }
		    cout<<"\n";
		
		
		
		
}
void khoitao()
{
	f=1000;
	cost=0;
//	x[0]=0;
	for(int i=1;i<=n;i++)
	tho[i]=1;
}
void kyluat()
{
	int s;

	if(cost<f)
	{
		f=cost;//cost la chi phi cua phuogn an, neu f ma lon' hon thi cap nhat lai f=cost
		for(int i=1;i<=n;i++)
		xopt[i]=x[i];
	
	}
}
void tim(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(tho[j]==1)
		{
		
		x[i]=j;
		tho[j]=0;
		cost=cost+c[i][x[i]];
		if(i==n)
		kyluat();
		else
		
			if(cost+((n-i)*cmin)<=f)
			tim(i+1);
			tho[j]=1;
		cost=cost-c[i][x[i]];
	   }
	}
}
main()
{
	read();
	khoitao();
	tim(1);
	cout<<"chi phi = "<<f;
	cout<<"\n";
	for(int i=1;i<=n;i++)
	{
		   cout<<"tho "<<xopt[i]<<" lam cong viec "<<i;
		   cout<<"\n";
		   
		   
    }
	getch();
}

