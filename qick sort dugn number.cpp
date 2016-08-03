#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<fstream>
using namespace std;

long A[10000000];
void docfile()
{

    ifstream fin("number.txt");
    long i;
    for(i=0;i<10000000;i++)
    {
        fin>>A[i];
    }
    fin.close();
}

void swap(int x,int y)
{
    int tam;
    tam= x;
    x= y;
    y= tam;
}
void selectionSort(int n)
{
    int i,j,min,minat;
    for(i=0;i<(n-1);i++)
    {
        minat=i;
        min=A[i];

            for(j=i+1;j<n;j++)
        {
          if(min>A[j])
          {
              minat=j;
              min=A[j];
          }
        }
        swap(A[i],A[minat]);
    }
}


void quicksort(int l,int r)
{
     if(l>=r) return;
     int i=l;
     int j=r;
     int x=A[(l+r)/2];//x=A[random(l-r)]
     while(i<=j)
     {
                while(A[i]<x)
                i++;
                while(A[j]>x)
                j--;
                if(i<=j)
                {
                        swap(A[i],A[j]);
                        i++;
                        j--;
                }
     }
     quicksort(l,j);
     quicksort(i,r);
}


int main()
{
   docfile();
   quicksort(1,10000000);
  // selectionSort(10000000);
    long k;
   for(k=1;k<10000000;k++)
   {
       printf("%d  ",A[k]);
   }

   return 0;
}




