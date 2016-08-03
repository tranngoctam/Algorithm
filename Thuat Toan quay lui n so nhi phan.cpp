#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int x[20],n,count=0;
void output()
{
	count++;
	cout<<count<<") ";
	for(int i=0;i<n;i++)
	{
	
     	cout<<x[i];
    }
     //	cout<<"\n";
     	if(count%20==0)
     	{
     		cout<<"\n";
     		cout<<"nhan phim bat ki de tiep tuc !";
     		getch();
     	}
    
    cout<<"\n";
	
}
void tim(int i)
{
	for(int j=0;j<=1;j++)
	{
		x[i]=j;
		if(i==n-1)
		output();
		else
		tim(i+1);
		
	}
}
int main()
{
	cout<<"nhap n= ";
	cin>>n;
	tim(0);
}
