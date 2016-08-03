#include<iostream>
#include<conio.h>
using namespace std;
int n,x[20],a[20],b[20],dem,vt;
void khoitao()
{
     dem=0;
	 vt=0;
     cout<<"nhap n ";cin>>n;
     for(int i=1;i<=n;i++)
     {
             cout<<"a["<<i<<"]  ";
             cin>>a[i];
     }
}
void xuat(int dem,int vt)
{
    // dem++;cout<<dem<<")      ";
     for(int i=vt-dem+1;i<=dem;i++)
     {
             cout<<a[i]<<"   ";
     }
     cout<<"\n";
}
void tim()
{
     for(int i=0;i<n;i++)
     {
            if(a[i]<a[i+1])
            {
            	dem++;
            	vt=i+1;
            }
            else
            if(dem>=2)
            {
            	xuat(vt,dem);
            	vt=0,dem=0;
            }
     }
}
main()
{
      khoitao();
      tim();
      getch();
}

