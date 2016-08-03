#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
	int *p,n;
	cout <<"nhap so phan tu = ";
	cin >>n;
	p=new int[n];
	for (int i=0;i<n;i++)
	{
		cout <<"nhap phan tu thu " << i <<" " ;
		cin >>p[i];
		
	}
	int T=0;
	for(int j=0;j<n;j++)
	{
		T=T+p[j];
		
	}
	cout <<"tong="<<T;
	getch();
}
