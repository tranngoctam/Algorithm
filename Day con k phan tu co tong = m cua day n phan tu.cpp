#include<iostream>
#include<conio.h>
using namespace std;
int n,m,k,x[20],a[20],b[20],dem,s;
void khoitao()
{
     s=0;
     dem=0;
     cout<<"nhap n ";cin>>n;
     for(int i=1;i<=n;i++)
     {
             cout<<"a["<<i<<"]  ";
             cin>>a[i];
     }
     cout<<"m= ";cin>>m;
     cout<<"k=";
     cin>>k;
}
void xuat(int i)
{
     dem++;cout<<dem<<")      ";
     for(int j=1;j<=i;j++)
     {
             cout<<x[j]<<"   ";
     }
     cout<<"\n";
}
void tim(int i)
{
     for(int j=b[i-1]+1;j<=n;j++)
     {
             x[i]=a[j];
             s+=x[i];
             b[i]=j;
             if(i==k && s==m)
             {
                     xuat(i);
             }
             else
             tim(i+1);
             s-=a[j];
     }
}
main()
{
      khoitao();
      b[0]=0;
      tim(1);
      getch();
}

