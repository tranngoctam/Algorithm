#include<iostream>
using namespace std;
int main()
{
	
	
	int n;
	cin>>n;
	for(int m=2;m<=n;m++)
	{
	int a[20],dem=0,vt=1,k=1;
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	int ms[20],l[20],kq[20],kt=1;
	for(int i=1;i<=n;i++)
	{
		ms[i]=0;
	}
	while(1)
	{
		for(int i=1;i<=n;i++)
	    {
		    if(ms[i]==0)
	     	{
			    dem++;
			    vt=i;
	    	
		        if(dem%m==0)
		        {
		        	kt++;
		        	ms[i]=1;
		        	kq[k]=vt;
		        	k++;
		        	
		        }
		    }
		
    	}
    	if(kt==n+1) break;
	}
	if(kq[n]==1)
	cout<<"m="<<m<<" thi so bi loai cuoi cung la 1"<<"\n";
	cout<<"m="<<m<<"....  ";
	for(int i=1;i<=n;i++)
	{
		cout<<kq[i]<<" ";
	}
	cout<<"\n";
    }
	
}
