#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int a[20][20], n,m;
const int vc=32767;
void DocFile(){
	int i,j,k;
	ifstream fin("thicaykhung.txt");
   	fin>>n;
	for (int i=1; i<=n; i++){   	
		a[i][i]=0;
		for (int j=i+1; j<=n; j++){
			a[i][j]=a[j][i]=vc;
		}
	}
	m=0;
	while((fin>>i>>j>>k)!=NULL) {
		m++;
		a[i][j]=a[j][i]=k;
	}	
   	fin.close();
}
void InMTTS(){
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			if(a[i][j]==vc) cout<<setw(3)<<"vc";
			else cout<<setw(3)<<a[i][j];
		}
		cout<<endl;
	}
}
void Prim(){
	if (m<n-1) {
		cout<<endl<<"Khong co cay khung"<<endl; return;
	}
	int tham[20],d[20],Near[20],ck[20][3];
	int s=1;
	for(int i=1;i<=n;i++){
		tham[i]=0;
		d[i]=a[s][i];
		Near[i]=s;
	}	
	tham[s]=1;	
	int sc=0,u,cdnn=0;
	for(int i=1;i<=n-1;i++){
   		int j,temp=vc;
		for ( j=1;j<=n;j++)
			if(tham[j]==0&&d[j]<temp){
				temp=d[j]; u=j;
			}
		sc++;
		ck[sc][0]=u;ck[sc][1]=Near[u];ck[sc][2]=a[u][Near[u]];
		cdnn+=ck[sc][2];	tham[u]=1;
		for (int v=1;v<=n;v++)
			if (tham[v]==0&&d[v]>a[u][v]){
				d[v]=a[u][v];Near[v]=u;
			}
	}
	cout<<endl<<"Cay khung nho nhat:"<<endl;
	for (int i=1; i<=n-1; i++)
		cout<<"("<<ck[i][0]<<","<<ck[i][1]<<","<<ck[i][2]<<") ";
	cout<<endl<<"Do dai = "<<cdnn<<endl;		
}
int main(){
	int a[20][20],n,m;
	DocFile();
	cout<<"*Ma tran trong so:"<<endl;
	InMTTS();
	Prim();
}

