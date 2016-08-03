#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int c,n;
cout<<"randdom number in [1,100]"<<"\n";
for(c=1;c<=10;c++)
{
    n=rand()%100 +1 ;
cout<<n<<" ";
}
}
