// S? d?ng BFS
#include <iostream>
using namespace std;
#include <fstream>
#include <iomanip>
#include<queue>
int n;int a[20][20];
void DocFile()
{
	ifstream fin ("khonglienthong.txt");
	int i,j;
	fin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			a[i][j]=0;
	while((fin>>i>>j)!=NULL)
	{
		a[i][j]=a[j][i]=1;
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
void BFS1(int i,int tham[])
{
	int queue[2*20],f,r;
	int u,v;
	f=r=0;
	queue[r++]=i; tham[i]=1;
	while(f!=r){
		u=queue[f++];
		//cout<<u<<" ";	
		for(v=1;v<=n;v++){
			if(a[u][v]==1&&tham[v]==0)
			 {
				queue[r++]=v; tham[v]=1; 	
			} 
		}
	}
}
int LienThong()
{
	int tham[20],i;
	for(i=1;i<=n;i++) tham[i]=0;
	BFS1(1,tham);		
	for(i=1;i<=n;i++)
	{
		if(tham[i]==0) return 0;
	}
	return 1;
}
int main()
{
	//nt a[max][max]; int n;
	DocFile();
	InMTK();
	if(LienThong()==1)cout<<"Do Thi Lien Thong"<<endl;
	else cout<<"Do Thi Khong Lien Thong"<<endl;
}

/*su dung DFS
void DFS1(int i,int a[max][max],int tham[], int n){
	tham[i]=1;
	for(int j=1;j<=n;j++)
if(a[i][j]==1&&tham[j]==0) DFS1(j,a,tham,n);
}
int LienThong(int a[max][max], int n){
	int tham[max],i;
	for(i=1;i<=n;i++) tham[i]=0;
	DFS1(1,a,tham,n);		
	for(i=1;i<=n;i++){
		if(tham[i]==0) return 0;
	}
	return 1;*/

