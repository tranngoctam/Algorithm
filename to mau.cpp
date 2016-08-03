#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int a[20][20],n;
struct dinh{
int stt;
	int bac;
   	int mau;
};
dinh d[20];
void DocFile()
{
	ifstream fin ("vikhung.txt");
	fin>>n;    
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			fin>>a[i][j];
		}      
	}
	fin.close();
}
void InMTK()
{
	cout<<"\n*Ma tran ke:"<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";
		}
      		cout<<endl;
	}
}

void KhoiTao()
{
	for(int i=1;i<=n;i++)
	{
		int s=0;
		for(int j=1;j<=n;j++)
		{
			s+=a[i][j];	
		}
		d[i].stt=i;
		d[i].bac=s;
		d[i].mau=0;
   }
}
void SapXep()
{
	for(int i=1;i<n;i++)
	{
   	int t=i;
		for(int j=i+1;j<=n;j++)
		{
			if(d[j].bac>d[t].bac) t=j;	   	
		}
		dinh x=d[i]; d[i]=d[t];d[t]=x;
	}
}
int ToMau()
{
	int m=0,i,j,k;
	while(1)
	{
		for(i=1;i<=n;i++)
		{
			if(d[i].mau==0) break;
		}
      		if(i>n) break;
		else
		{
			d[i].mau=++m;
			 for(j=i+1;j<=n;j++)
			 {
				if(d[j].mau==0)
				{
                     for(k=1;k<=n;k++)
					 {
						if(d[k].mau==m&&a[d[j].stt][d[k].stt]==1) break;			
					 }
					if(k>n) d[j].mau=m;
            	}
         	 }
        }
	}
	return m;
}
void InDinh()
{
	for(int i=1;i<=n;i++)
	{
		cout<<"("<<d[i].stt<<","<<d[i].bac<<","<<d[i].mau<<") ";
	}
   	cout<<endl;
}
void InKetQua(int somau)
{	
	for(int i=1;i<=somau;i++)
	{
		cout<<"mau "<<i<<": ";
		for(int j=1;j<=n;j++)
		{
			if(d[j].mau==i) cout<<d[j].stt<<" ";
		}
cout<<endl;
	}
}
int main()
{
	dinh d[20];
	int somau;
	DocFile();
//	SinhMTK(a,n);
	InMTK();	
	cout<<"To mau khong sap xep:"<<endl;
	KhoiTao();
	somau=ToMau();
	InKetQua(somau);
	cout<<"To mau co sap xep:"<<endl;
	KhoiTao();
	SapXep();
	somau=ToMau();
	InKetQua(somau);	
}

