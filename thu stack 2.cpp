#include<iostream>
#include<stdlib.h>
using namespace std;
#include<stack>
int main()
{
    stack <int> S; //Khai bao Stack
    
    	for(int i=0;i<10;i++)
    	{
    		S.push(i*2);
    	}
    while(!S.empty())
    {
    	int x=S.top();
    	S.pop();
    	cout<<x<<" ";
    }
}
    
