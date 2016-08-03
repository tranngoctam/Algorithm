#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
	int dem=0;
	for(int a=4;a<=20;a++)
	for(int b=9;b<=20-a;b++)
	for(int c=0;c<=20-b-a;c++)
	for(int d=6;d<=20-c-b-a;d++)
	for(int e=0;e<=20-d-c-b-a;e++)
	if (a+b+c+d+e==20)
	{
	    dem++;
	}
	cout<<"so nguyen nguyen khong am cua PT a+b+c+d+e=20 la"<<"\n"<<dem;
	
}
