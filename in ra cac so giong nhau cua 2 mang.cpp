
#include<conio.h>
#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int t=x;
	x=y;
	y=t;	
}
int main()
{
	int *p,*p1,n,m,a[20];
	cout<<"nhap so phan tu mang 1 ";
	cin>>n;
	cout<<"nhap so phan tu mang 2 ";
	cin>>m;
	p=new int[n];
	p1=new int[m];
	for(int i=0;i<n;i++)
	{
		cout<<"nhap phan tu cua mang 1 thu"<<" "<<i<<" ";
	    cin>>p[i];
	}
	cout<<"\n";
      for(int j=0;j<m;j++)
      {
    	cout<<"nhap phan tu cua mang 2 thu"<<" "<<j<<" ";
    	cin>>p1[j];
      }
      int k=0;
      int kt;
      int *tam=p;
      int *tam1=p1;
       for(int i=0;i<n;i++)
       {
       
       for(int j=0;j<m;j++)
         {
           if(tam[i]==tam1[j] && kt !=tam1[j])
           {
         	  a[k]=tam1[j];
         	  k++;
         	  kt=tam1[j];
         	
           }  
        
         
         }
         kt=0;
       }
       for(int i=0;i<k-1;i++)
       for(int j=i+1;j<k;j++)
       {
       	  if(a[i]>a[j])  	
       	  swap(a[i],a[j]);     	
       }
       for(int i=0;i<k;i++)
       cout<<a[i]<<" ";
       
      
}
