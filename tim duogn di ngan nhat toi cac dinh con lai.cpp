#include <iostream>
using namespace std;
#include <fstream>
#include <iomanip>
int n,a[20][20];
const int vc=32767;
void DocFile()
{
	int i,j,k;
	ifstream fin("duongdingannhat.txt");//duong di ngan nhat toi cac dinh con lai
   	fin>>n;
	for (int i=1; i<=n; i++)
	{   	
		a[i][i]=0;
		for (int j=i+1;j<=n; j++)
		{
			a[i][j]=a[j][i]=vc;
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
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
		{
			if(a[i][j]==vc) cout<<setw(3)<<"vc";
			else cout<<setw(3)<<a[i][j];
		}
		cout<<endl;
	}
}
void Dijkstra(int s)
{
	int tham[20],d[20],truoc[20];
	for(int i=1;i<=n;i++)
	{
		tham[i]=0;d[i]=a[s][i];truoc[i]=s;
	}	
	tham[s]=1;	
	for(int i=1;i<=n-1;i++)
	{
   		int u=0,j,temp=vc;
		for (j=1;j<=n;j++)
			if(tham[j]==0&&d[j]<temp)
			{
				 u=j;temp=d[j];
			}
		if(u==0) break;	
		tham[u]=1;
		for (int v=1;v<=n;v++)
			if (tham[v]==0&&d[v]>d[u]+a[u][v]){
				d[v]=d[u]+a[u][v];truoc[v]=u;
			}
	}
	cout<<endl<<"\nCac duong di tu dinh "<<s<<":"<<endl;
	for (int i=1; i<=n; i++)
		if(i!=s)
		{
			cout<<endl<<s<<"->"<<i<<": ";
			if(d[i]==vc) cout<<"Khong co duong di"<<endl;
			else
			{
				int stack[20],top=-1;				
				stack[++top]=i;
				int t=i;
				do
				{
					t=truoc[t];	
					stack[++top]=t;
				}while(t!=s);	
				while(top!=-1)
				{
					cout<<stack[top--]<<" ";	
				}
				cout<<"; CD="<<d[i]<<endl;
			}			
		}		
}
int main()
{
	int a[20][20],n,s; char tl;
	DocFile();
	cout<<"*Ma tran trong so:"<<endl;
	InMTTS();
	do
	{
		cout<<endl<<"Nhap dinh xp:";
		cin>>s;	
		Dijkstra(s);
		cout<<"\nTiep kg(c/k)?:";
		cin>>tl;	
	}while(tl=='c');	
}

