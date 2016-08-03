#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[5]={44,55,12,42,94};
	int x,i,j;
	for(int i=1;i<5;i++)
	{
		x=a[i];
		int j=i-1;
		while(j>=0&&x<a[j])
		{
			a[j+1]=a[j];
			j=j--;
		}
		a[j+1]=x;
    }
    for(int i=0;i<5;i++)
    {
    	cout<<a[i]<<" ";
    }
}
