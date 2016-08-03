
#include <iostream>
using namespace std;
#include <fstream>
#include <iomanip>
int a[20][20],n;
const int avc=-32768;
void DocFile()
{
	int i,j,k;
	ifstream fin("quanliduan.txt");
   	fin>>n;
	for (i=0; i<n; i++)
	{   	
		a[i][i]=0;
		for (j=i+1; j<n; j++)
		{
			a[i][j]=a[j][i]=avc;
		}
	}
	while((fin>>i>>j>>k)!=NULL) 
	{
		a[i][j]=k;
	}	
   	fin.close();
}
void InMTTS()
{
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			if(a[i][j]==avc) cout<<setw(4)<<"avc";
			else cout<<setw(4)<<a[i][j];
		}
		cout<<endl;
	}
}
int Number(int v[20])
{
	int queue[20],vao[20],f,r,num,i,j;
	for (i=0;i<n;i++)  vao[i]=0;
	for (j=0;j<n;j++)
	{
		for (i=0;i<n;i++)
			if (i!=j&&a[i][j]!=avc) vao[j]++;
	}			
	f=r=0  ;
	for (i=0;i<n;i++) 
		if (vao[i]==0) queue[r++]= i;
	num=0;
	while (f!=r)
	{
		i=queue[f++]; v[num++]=i;
		for (j=0;j<n;j++)
			if(i!=j&&a[i][j]!=avc)	
			{   
				vao[j]--;
				if  (vao[j]==0)
				{
					queue[r++]=j;
				} 
			}
	}
	if (num==n) return 1; else return 0;
}
void InNumber(int v[20])
{
	cout<<endl<<"Cac dinh duoc danh so lai:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"v"<<i<<"="<<v[i]<<"; ";
	}
	cout<<endl;
}
void Pert()
{
	int i,j,truoc[20],v[20],d[20];	
	if(Number(v)==0)
	{
		cout<<"co chu trinh"<<endl; 
		return;	
	} 	

	for (j=0;j<n;j++)
	{
		d[v[j]]=a[v[0]][v[j]];
   	}
	for (i=1;i<n;i++)
		for (j=0;j<n;j++)
			if(i!=j&&a[v[i]][v[j]]!=avc&&d[v[j]]<d[v[i]]+a[v[i]][v[j]])
			{
				d[v[j]]=d[v[i]]+a[v[i]][v[j]];
  			}
	cout<<"Cong viec "<<n-1<<" la cat bang khanh thanh"<<endl;
	cout<<"Thoi diem som nhat de thuc hien moi cong viec la:"<<endl;
	for (int i=1;i<n;i++)
	{
		if (d[v[i]]==avc) cout<<"Khong sap lich duoc"<<endl;
		else cout<<"cv "<<v[i]<<": "<<d[v[i]]<<endl;
	}
}
int main()
{
	int a[20][20],n;
	DocFile();
	InMTTS();
	Pert();
}	

