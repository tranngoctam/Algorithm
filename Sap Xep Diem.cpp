#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct diem
{
	float toan;
	float ly;
	float hoa;	
};
struct sinhvien
{
	string ten;
	int namsinh;	
	diem b;	
};
int main()
{
	sinhvien *p;
	int n;
	cout<<"nhap n:";// so sinh vien
	cin>>n;
	p=new sinhvien[n];
//	sinhvien *tam=p;
//	 sinhvien a[n];
	//sinhvien *a;
	for(int i=0;i<n;i++)
	{
		cout<<"nhap ten sinh vien thu "<<i<<p[i].ten;
		fflush(stdin);
		getline(cin,p[i].ten);
		cout<<"nhap nam sinh:";
		cin>>p[i].namsinh;
		cout<<"nhap diem toan:";
		cin>>p[i].b.toan;
		cout<<"nhap diem ly:";
		cin>>p[i].b.ly;
		cout<<"nhap diem hoa:";
		cin>>p[i].b.hoa;
	}
	sinhvien *tam=p;
	for(int j=0;j<n;j++)
	{
		if((tam[j].b.toan+tam[j].b.ly+tam[j].b.hoa)>=15&&tam[j].b.toan!=0&&tam[j].b.ly!=0&&tam[j].b.hoa!=0)
		{
			cout<<"thi sinh trung tuyen:"<<tam[j].ten<<"\n";
		}
		else
		{
			cout<<"thi sinh khong trung tuyen:"<<tam[j].ten;
		}
		float tong[20];
		for(int i=0;i<n;i++)
		tong[i]=p[i].b.toan+p[i].b.ly+p[i].b.hoa;
		sinhvien tam1;
	
		for (int j = 0;  j< n-1; j++)
    		for (int t = j + 1; t < n; t++)
    		{
     			if (tong[j] < tong[t])
       			{
       				 tam1 = p[j];
        			p[j]= p[t];
        			p[t] = tam1;
        		}
    		}
   		 for (int t=0; t<n; t++)    cout<<p[t].ten;
	}
}

