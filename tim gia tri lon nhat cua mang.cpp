#include <iostream>
using namespace std;
 int main()
 {
 	int n[10];
 	for(int i=0;i<10;i++)
 	{
 		cout <<"nhap phan tu thu" << i;
 		cin >>n[i];
    }
 		int M=n[0];
 		for(int j=0;j<10;j++)
 		{
 			if(M<n[j])
 			{
 	          M=n[j];
 		    }
 		}
 		cout<<"gia tri lon nhat" << M;
 	return 0;
 	
 }
