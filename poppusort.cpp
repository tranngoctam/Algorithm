#include<iostream>
using namespace std;
void swap(int a,int b)
{
	int t=a;
	a=b;
	b=t;
}
int main()
{
	int a[10];
	for(int i=0;i<10;i++){
		
	
	cout<<"nhap phan tu thu "<<i<<" ";
	cin>>a[i];}
	for( int i=0;i<10;i++)
	{
		
		for(int j=0;j<9;j++)
		{
			if(a[j]>a[j+1])
			{
				
				swap(a[j],a[j+1]);
			}
		}
	}
	for(int i=0;i<10;i++)
	cout<<a[i];
}
