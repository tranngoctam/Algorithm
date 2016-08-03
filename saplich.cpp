#include<iostream>
#include<fstream>
using namespace std;
struct dinh{
int stt;
	int bac;
   	int mau;
};
dinh d[20];int n,a[20][20];
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
void DocFile(){
	int i,j;
	ifstream fin ("saplich1.txt");
	fin>>n;    
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			a[i][j]=0;
		}      
	}
while((fin>>i>>j)!=NULL){
		a[i][j]=a[j][i]=1;	
	}
	fin.close();
}
void KhoiTao(){
	for(int i=1;i<=n;i++){
		int s=0;
		for(int j=1;j<=n;j++){
			s+=a[i][j];	
		}
		d[i].stt=i;
		d[i].bac=s;
		d[i].mau=0;
   }
}
void SapXep(){
	for(int i=1;i<n;i++){
	   	int t=i;
		for(int j=i+1;j<=n;j++){
			if(d[j].bac>d[t].bac) t=j;	   	
		}
dinh x=d[i]; d[i]=d[t];d[t]=x;
	}
}
int ToMau(){
	int m=0,i,j,k;
	while(1){
		for(i=1;i<=n;i++){
			if(d[i].mau==0) break;
		}
   		if(i>n) break;
		else{
			d[i].mau=++m;
			 for(j=i+1;j<=n;j++){
				if(d[j].mau==0){
					for(k=1;k<=n;k++){
						if(d[k].mau==m&&a[d[j].stt][d[k].stt]==1) break;			
					}
					if(k>n) d[j].mau=m;
 				}
  			}
		}
	}
return m;
}
void InDinh(){
	for(int i=1;i<=n;i++){
		cout<<"("<<d[i].stt<<","<<d[i].bac<<","<<d[i].mau<<") ";
	}
   	cout<<endl;
}
void InKetQua(int somau){	
	for(int i=1;i<=somau;i++){
		cout<<"Buoi "<<i<<": ";
		for(int j=1;j<=n;j++){
			if(d[j].mau==i) cout<<d[j].stt<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int somau;
	DocFile();
	InMTK();	
cout<<"Sap lich khong uu tien:"<<endl;
	KhoiTao();
	somau=ToMau();
	InKetQua(somau);
	cout<<"Sap lich co uu tien:"<<endl;
	KhoiTao();
	SapXep();
	somau=ToMau();
	InKetQua(somau);	
}


