#include<iostream>
using namespace std;
int main()
{
	char tl;
	do
	{
	
	  int n,s=0;
	  cout<<" nhap so ";
	  cin>>n;
	  for(int i=1;i<=n;i++)
	  {
		 if(n%i==0)
		 { 
			s=s+i;
		 }
	  } 
	cout<<s;
    
    cout<<" co lam tiep khong ";
    cin>>tl;
    }
	while(tl=='c');
    
}
