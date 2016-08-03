#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;
int c[100][100],cmin,tp[100],cost,f,x[100],xopt[100],n;
void read()
{
		ifstream hin("uc.txt");
		hin>>n>>cmin;
		for(int i=0;i<n;i++)
		{		
		    for(int j=0;j<n;j++)
	     	hin>>c[i][j];
	    }
		hin.close();
			cout<<n<<" "<<cmin;
		cout<<"\n";
		for(int i=0;i<n;i++)
		    for(int j=0;j<n;j++)
		    {
     			cout<<c[i][j]<<" ";
     			if(j==3)
     			cout<<"\n";
		    }
		    cout<<"\n";
		
		
		
		
}
void khoitao()
{
	f=1000;
	cost=0;
	x[0]=0;
	for(int i=0;i<n;i++)
	tp[i]=1;
}
void kyluat()
{
	int s;
	s=cost+c[x[n-1]][x[0]];
	if(s<f)
	{
		f=s;
		for(int i=0;i<n;i++)
		xopt[i]=x[i];
	
	}
}
void tim(int i)
{
	for(int j=1;j<n;j++)
	{
		if(tp[j]==1)
		{
		
		x[i]=j;
		tp[j]=0;
		cost=cost+c[x[i-1]][x[i]];
		if(i==n-1)
		kyluat();
		else
		
			if(cost+((n-i+1)*cmin)<=f)
			tim(i+1);
			tp[j]=1;
		cost=cost-c[x[i-1]][x[i]];
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
	for(int i=0;i<n;i++)
	cout<<xopt[i]+1<<"-->";
	cout<<xopt[0]+1;
	getch();
}

