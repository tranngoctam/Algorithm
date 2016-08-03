#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int a[20][20], n;
void DocFile ()
{
	ifstream fin ("euler.txt");
	int i,j;
	fin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			a[i][j]=0;
	while((fin>>i>>j)!=NULL){
		a[i][j]=1;
	}
	fin.close();
}
void InMTK(){
	cout<<"\n*Ma tran ke:"<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
   		cout<<endl;
	}
}
void DFS1(int i,int tham[]){
	tham[i]=1;
	for(int j=1;j<=n;j++)
		if(a[i][j]==1&&tham[j]==0) DFS1(j,tham);
}
int KTLienThong(){
	int tham[20],i;
	for(i=1;i<=n;i++) tham[i]=0;
	DFS1(1,tham);		
	for(i=1;i<=n;i++){
		if(tham[i]==0) return 0;
	}
	return 1;
}

int KtEuler(int &dinhle){
	int sodinhle=0;
	for(int i=1;i<=n;i++){
		int bac=0;
		for(int j=1;j<=n;j++){
			bac+=a[i][j];
		}
		if (bac%2==1) {
			dinhle=i;
			sodinhle++;
		}
	}
	if(sodinhle==0) return 1;//co ct euler
	if(sodinhle==2) return 2;//co dd euler
	return 0;//khong co dd euler
}
void InCTDDEuler(int dxp){
	int stack[2*20],CE[2*20];
	int top=-1;	
	int i,j,k=0;
	stack[++top]=dxp;
	while(top!=-1){
		i=stack[top];
		for(j=1;j<=n;j++){
			if(a[i][j]==1) break;
		}
		if(j<=n)
		{
			stack[++top]=j;
			a[i][j]=0;
		}else
		{
			CE[k++]=i; top--;
		}
	}
	for(i=k-1;i>=0;i--){
		cout<<CE[i]<<" ";
	}
	cout<<endl;
}
void Euler(){
	if(KTLienThong()==0) 
	{
		cout<<"Do thi kg lt nen kg co dd euler"<<endl;
		return;
	}
//	int dinhle=0;
//	int kq=KtEuler(dinhle);
//	switch (kq){
//		case 0:{
//			cout<<"Do thi co so dinh bac le > 2 nen kg co dd euler"<<endl;
//			break;	
//		}		
//		case 1:{
//			cout<<"Do thi co so dinh bac le = 0 nen co ct euler"<<endl;
			InCTDDEuler(1);
//			break;
//		}
//		case 2:{
//			cout<<"Do thi co so dinh bac le = 2 nen co dd euler"<<endl;
//			InCTDDEuler(dinhle);
//			break;
//		}
//	}
}
int main(){
	int a[20][20],n;
	DocFile();
	InMTK();
	Euler();
}

