#include <iostream>
using namespace std;
#include <fstream>
#include <iomanip>
#include <math.h>

const int max=20;
int c[20][20], f[20][20], cf[20][20], truoc[20],n;
int  s, t;
void KhoiTao()
{
	int i,j,k;
	ifstream fin("luongcucdai.txt");
	fin>>n>>s>>t;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			c[i][j]=f[i][j]=0;	
	while((fin>>i>>j>>k)!=NULL)
	{
		c[i][j]=k;
	}
	fin.close();
}
void InMTTS()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<setw(3)<<c[i][j];			
		cout<<endl;
	}
}
void TaoGf()
{
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) cf[i][j]=0;		
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			if(c[i][j]>0)
			{
				if(f[i][j]<c[i][j]) cf[i][j]=c[i][j]-f[i][j];
			//	if(f[i][j]>0) cf[j][i]=-f[i][j];
			}
		}
}
int TimDuong()
{
	int hd[2*20],tham[20],d,c,i,j;
	for(i=1;i<=n;i++) tham[i]=0;
	d=c=0;
	hd[c++]=s; tham[s]=1;
	while(d!=c)
	{
		i=hd[d++];
		for(j=1;j<=n;j++)
			if(tham[j]==0&&cf[i][j]!=0)
			{
				hd[c++]=j; tham[j]=1;
				truoc[j]=i;
				if(j==t) return 1;
			} 
	}
	return 0;
}
void TangLuong()
{
	int min=32767; 
	int u,v=t;
	do
	{
		u=truoc[v];
		if (cf[u][v]<min) min=cf[u][v];	
		v=u;	
	}while(v!=s);
	v=t;
	while(v!=s)
	{
		u=truoc[v];
		if(cf[u][v]>0) f[u][v]+=min;
	//	else f[v][u]-=min;
		v=u;
	}
}
void LuongCucDai()
{
	while(1)
	{
		TaoGf();
		if(TimDuong()==1) TangLuong();	
		else break;	
	}
	int gtcd=0;
	cout<<"Luong cuc dai:"<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(f[i][j]>0)
			{
				cout<<"f("<<i<<","<<j<<")= "<<f[i][j]<<endl;
				if(i==s) gtcd+=f[i][j];
			}
		}
	}
	cout<<"Gia tri luong cuc dai= "<<gtcd<<endl;
}
int main(){	
	KhoiTao();
	InMTTS();
	LuongCucDai();
	cout<<endl;
	return 0;
}

