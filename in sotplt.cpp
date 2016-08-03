#include <iostream>
using namespace std;
#include <fstream>
#include <iomanip>
int n,a[20][20];
void DocFile()
{
	ifstream fin ("sotplt.txt");
	int i,j;
	fin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++) a[i][j]=0;
	while((fin>>i>>j)!=NULL){
		a[i][j]=a[j][i]=1;
	}
	fin.close();
}
void InMTK()
{
	cout<<"\n*Ma tran ke:"<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
   		cout<<endl;
	}
}
void DFS1(int i,int tham[],int sotplt)
{
	tham[i]=sotplt;
	for(int j=1;j<=n;j++)
		if(a[i][j]==1&&tham[j]==0) DFS1(j,tham,sotplt);
}
void TimTPLT()
{
	int tham[20],i,j,sotplt=0;
	for(i=1;i<=n;i++) tham[i]=0;
	for(i=1;i<=n;i++)
		if(tham[i]==0) DFS1(i,tham,++sotplt);	
	if(sotplt==1) cout<<"Do thi lien thong"<<endl;
	else
	{
		for(i=1;i<=sotplt;i++){
			cout<<"TPLT thu "<<i<<": ";
			for(j=1;j<=n;j++){
				if(tham[j]==i) cout<<j<<" ";
			}
			cout<<endl;
		}	
	}
}
int main()
{	
	DocFile();
	InMTK();
	TimTPLT();
}

