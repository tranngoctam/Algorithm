#include <stdlib.h>
#include <stdio.h>
#include <stack> //khai bao Stack
#include<iostream>
 
using namespace std; 
 
int main()
{
    stack <int> S; 
    int coso, so, du;
    cout<<"Nhap so can chuyen: ";
    cin>>so;
   cout<<"Nhap co so can chuyen: ";
    cin>>coso;
    int n=so;
    while(so)
    {
        du = so % coso;
        S.push(du);
        so /= coso;
    }
    cout<<n<<" trong he "<<coso<<"la ";
    while(!S.empty())
    {
        cout<<S.top();
        S.pop();
    }
    return 0;
}
