#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<fstream>
using namespace std;
int n,left,right;
long a[10000000];
void docfile()
{
     
     ifstream fin("number.txt");
     for(long i=0;i<10000000;i++)
     fin>>a[i];
     fin.close();
}

void swap(double &a,double &b)
{
	double  t=a;
	a=b;
	b=t;
}
/*void quicksort(double left,double right)
{
	int i,j;
	int x=a[(left+right)/2];
	i=left;
	j=right;
	do
	{
		while(a[i]<x) i++;
		while(a[j]>x) j--;
		if(i<=j)
		{
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}while(i<=j);
	if(left<j)
	quicksort(left,j);
	if(right>i)
	quicksort(i,right);

}*/
int main()
{
	long so;
	docfile();
	
    //quicksort(0,9999999);
    //for(int i=0;i<9999999;i++)
    //cout<<a[i]<<" ";
    so=a[900000];//a[757035]+a[87765]+a[470125]+a[324915];
    cout<<so;
            
	
	}


