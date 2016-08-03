#include <iostream>
using namespace std;
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{ 
    int l;
    char a[40];
    cout <<" moi nhap chuoi : ";
    fflush (stdin);
    cin.getline(a,39);
    for (int i=0;i<=strlen(a);i++)
    {
    	l=strlen(a);
    	if(a[i]==' ')
    	{
    		for (int j=i;j<=l;j++)
    		{
    			a[j]=a[j+1];
    			
    		}
    		i--;
    	}
    	
    }
    cout<<a;
    getch();
    
}
