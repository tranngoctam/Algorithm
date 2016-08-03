#include<iostream>
#include<stdlib.h>
using namespace std;
#include<stack>
int main()
{
    stack <int> S; //Khai bao Stack
    for (int x=0; x<10; x++) //Nhap Stack
        S.push(x*2); //Them phan tu vao Stack
    while(!S.empty()) //Trong khi danh sach khong rong thi duyet va xuat ra Stack
    {
        int x = S.top(); //lay gia tri Top
        S.pop(); //Loai bo phan tu Top
        cout<<x<<" "; //Xuat ra Stack
    }
    return 0;
}
