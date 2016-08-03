#include <iostream>
using namespace std;
#include <fstream>
#include <iomanip>
#include <queue>
#include <stack>
int n, a[20][20];
void DocFile()
{
	ifstream fin ("timduongdi.txt");
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
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";
		}
   		cout<<endl;
	}
}
void DuongDi(int s, int t)
{
	int tham[20],truoc[20];
	int queue[2*20],f,r;
	int u,v,ketqua=0;
	for(u=1;u<=n;u++) tham[u]=0;
	f=r=0;
	queue[r++]=s; tham[s]=1;
	while(f!=r&&ketqua==0)
	{
		u=queue[f++];
		for(v=1;v<=n;v++)
		{
			if(a[u][v]==1&&tham[v]==0)
			{
				truoc[v]=u; 					
				if(v==t) 
				{
					ketqua=1; break;
				
             	}				
				queue[r++]=v; tham[v]=1;
			} 
		}
	}
	if(ketqua==0) cout<<"Khong co duong di tu "<<s<<" den "<<t<<endl;
	else
	{
		cout<<"Duong di tu "<<s<<" den "<<t<<" la: ";
//		cout<<t<<"  ";
//		do{
//			t=truoc[t];
//			cout<<t<<"  ";
//		}while(t!=s);
//		cout<<endl;
        int stack[20], top=-1;
		stack[++top]=t;
		do
		{
			t=truoc[t];
			stack[++top]=t;
		} 
		while(t!=s);
		while(top!=-1)
		{
			cout<<stack[top--];
			if(top!=-1) cout<<"->";
		}
	}
}

int main()
{
	int s,t;
	cout<<"Nhap dinh xp va dinh kt:";
	cin>>s>>t;
	DocFile();
	InMTK();
    DuongDi(s,t);
}
	

