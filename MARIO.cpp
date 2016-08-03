#include <iostream>
using namespace std;
#include <conio.h>
main()
{
	int dem=0,dem1=0;
	int n,a[20];
	cout<<"nhap n";
	cin>>n;
	for( int i=0;i<n;i++)
	{
		cout<<" ";
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if( a[i]<a[i+1])
		dem=dem++;
		if(a[i]>a[i+1])
		dem1=dem1++;
	}
	cout<<"Nhay Cao="<<dem;
	cout<<"Nhay Thap="<<dem1;
	getch();
}
