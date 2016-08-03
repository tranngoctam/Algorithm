#include <iostream>
#include <fstream>
using namespace std;
int a[20][20],n;
void DocFile()
{
	ifstream hin("bacdinh.txt");
	hin>>n;    
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			hin>>a[i][j];
		}      
	}
	hin.close();
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
void TinhBac() 
{
	cout<<"\n*Tinh bac:"<<endl;
	for (int i = 1; i <= n; i++) 
	{
   		int s = 0;
      		for (int j = 1; j <= n; j++) 
			  {
      			s += a[i][j];
      		  }
		cout<<"Bac cua dinh "<<i<<" = "<<s<<endl;
   	}
}
int main()
{
	
	DocFile();
//    DocFile();
	InMTK();
    TinhBac();	
}

