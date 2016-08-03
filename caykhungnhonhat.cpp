#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int dsc[20][3], n,  m;
void DocFile(){
	ifstream fin("thicaykhung.txt");
   	fin>>n;
   	m=0;
   	int i,j,k;
	while((fin>>i>>j>>k)!=NULL) {
		m++;dsc[m][0]=i;dsc[m][1]=j;dsc[m][2]=k;	
	}	
   	fin.close();
}
void InDSC(){
	for (int i=1; i<=m; i++)	{
		cout<<setw(3)<<dsc[i][0]<<setw(3)<<dsc[i][1]<<setw(3)<<dsc[i][2]<<endl;
	}
}
void SapXep(){
	for (int i=1; i<m; i++)	{
		int k=i;
		for (int j=i+1; j<=m; j++)
			if (dsc[j][2]<dsc[k][2]) k=j;
		if (k!=i){
			int t;
			t=dsc[i][0];dsc[i][0]=dsc[k][0];dsc[k][0]=t;
			t=dsc[i][1];dsc[i][1]=dsc[k][1];dsc[k][1]=t;
			t=dsc[i][2];dsc[i][2]=dsc[k][2];dsc[k][2]=t;
      	}
	}
}
int Goc(int i,int truoc[]){
	while (truoc[i]!=-1) i=truoc[i];
	return i;
}
void Kruskal(){
	if (m<n-1) {
		cout<<endl<<"Khong co cay khung"<<endl; return;
	}
	SapXep();
	int truoc[20],ck[20][3];
	for (int i=1; i<=n; i++) truoc[i]=-1;
	int sc=0, cdnn=0;
	for (int k=1; k<=m && sc<n-1;k++){
		int i=dsc[k][0]; int j=dsc[k][1]; int l=dsc[k][2];
		int x=Goc(i,truoc); int y=Goc(j,truoc);
		if (x!=y){
			sc++;
			ck[sc][0]=i;ck[sc][1]=j;ck[sc][2]=l; cdnn+=l;
			truoc[y]=x;
		}
	}
	cout<<endl<<"Cay khung nho nhat:"<<endl;
	for (int i=1; i<=n-1; i++)
		cout<<"("<<ck[i][0]<<","<<ck[i][1]<<","<<ck[i][2]<<") ";
	cout<<endl<<"Do dai = "<<cdnn<<endl;				
}
int main(){
	int dsc[20][3],n,m;
	DocFile();
	cout<<"*Danh sach canh truoc khi sx:"<<endl;
	InDSC();
	SapXep();
	cout<<"*Danh sach canh sau khi sx:"<<endl;
	InDSC();
	Kruskal();
}

