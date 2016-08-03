#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
const int vc=32767;
int a[20][20],n;
void DocFile(){
	int i,j,k;
	ifstream fin("thifloyd.txt");
   	fin>>n;
	for (int i=1; i<=n; i++){   	
		a[i][i]=0;
		for (int j=i+1;j<=n; j++){
			a[i][j]=a[j][i]=vc;
		}
	}
	while((fin>>i>>j>>k)!=NULL) {
		a[i][j]=k;
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
void Floyd(){
	int d[20][20],p[20][20];
	for(int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			d[i][j]=a[i][j];p[i][j]=i;	
		}		
	}	
	for (int k=1;k<=n;k++)
		for (int i=1;i<=n;i++)
			for (int j=1;j<=n;j++)
				if (d[i][j]>d[i][k]+d[k][j]){
					d[i][j]=d[i][k]+d[k][j]; 
					p[i][j]=p[k][j];
				}

	cout<<endl<<"\nDanh sach cac duong di:"<<endl;
	for (int i=1; i<=n; i++)
		for (int j=1;j<=n;j++)
			if(i!=j){
				cout<<endl<<i<<"->"<<j<<": ";
				if(d[i][j]==vc) cout<<"Khong co duong di"<<endl;
				else{
					int stack[20],top=-1;				
					stack[++top]=j;
					int t=j;
					do{
						t=p[i][t];	
						stack[++top]=t;
					}while(t!=i);	
					while(top!=-1){
						cout<<stack[top--]<<" ";	
					}
					cout<<"; CD="<<d[i][j]<<endl;
				}			
			}		
}
int main(){
	int a[20][20],n;
	DocFile();
	cout<<"*Ma tran trong so:"<<endl;
	InMTTS();
	Floyd();
}

