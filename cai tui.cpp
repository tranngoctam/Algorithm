#include <iostream>
#include <fstream>
using namespace std;
int n,b,c[20],a[20],fmax,xopt[20],x[20],cost; //e la max
void read()
{
	ifstream hin("caitui2.txt");
	hin>>n>>b;
	for(int i=1;i<=n;i++)
	hin>>c[i];
	for(int i=1;i<=n;i++)
	hin>>a[i];
	hin.close();
	cout<<n<<"  "<<b<<"\n";
	for(int i=1;i<=n;i++)
	{
		cout<<c[i]<<"  ";
	}
	cout<<"\n";
	for(int i=1;i<=n;i++)
	cout<<a[i]<<"  ";
	cout<<"\n";
}
void khoitao()
{
	fmax=0;
	cost=0;
}
void kyluc()
{
	if(fmax<cost)
	{
		for(int i=1;i<=n;i++)
		{
			xopt[i]=x[i];
		}
		fmax=cost;
	}
}
void tim(int i)
{
	int t;
	t=b/a[i];
	for(int j=t;j>=0;j--)
	{
		x[i]=j;
		cost=cost+x[i]*c[i]; //cost la gia tri su dung cua tui khi chon xk
		b=b-x[i]*a[i];
		if(i==n)
		{
			kyluc();
		}
		else
		{
			if(fmax<cost+b*(c[i+1]/a[i+1])) //cost+b*c[i+1]/a[i+1] la g
			{
				tim(i+1);
			}
		}
		b=b+x[i]*a[i];
		cost=cost-x[i]*c[i];
	}
}
main()
{
	read();
	khoitao();
	tim(1);
	cout<<fmax<<"\n";
	for(int i=1;i<=n;i++)
	cout<<xopt[i]<<"  ";
	
}
