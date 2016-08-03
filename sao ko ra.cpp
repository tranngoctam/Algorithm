#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
struct nhanvien
{
      string ten;
      int tuoi;
      string gioitinh;
      nhanvien*next;
};
int main()
{
   nhanvien*dslk=NULL;
   nhanvien*tam;
   for(int i=0;;i++)
   {
           cout<<"ten nhan vien "<<i+1<<"\n";
           tam=new nhanvien;
           getline(cin,tam->ten);
           if(tam->ten==" ")break;
           cin>>tam->tuoi;
           fflush(stdin);
           getline(cin,tam->gioitinh);
           
           tam->next=NULL;
           if(dslk==NULL)
           dslk=tam;
           else
           {
               tam->next=dslk;
               dslk=tam;
           }
   }
   /*tam=dslk;
   while(1)
   {
           cout<<tam->ten<<tam->tuoi<<tam->gioitinh<<"\n";
           tam=tam->next;
           if(tam==NULL)break;
   }*/
   nhanvien*tam1=dslk;
   do
   {
               if(tam1->ten=="An")
               {
                      dslk=tam1->next;
                      delete(tam1);
                      tam1=dslk;
               }
               else
               {
                   if(tam1->next->ten=="An")
                   {
                       nhanvien*tam2=tam1->next;
                       tam1->next=tam2->next;
                       delete(tam2);
                   }
                   else
                   tam1=tam1->next;
               }
   }
   while(tam1->next!=NULL);
  // tam1=dslk;
  nhanvien *tam3=dslk;
  do
  {
  	if(tam3->tuoi<18)
  	{
  		nhanvien *tam4;
  		tam4=new nhanvien;
  		getline(cin,tam4->ten);
  		tam4->next=tam3->next;
  		tam3->next=tam4;
  		tam3=tam4->next;
  	}
  }
  while(tam3->next!=NULL);
   while(dslk!=NULL)
   {
        cout<<dslk->ten;
        dslk=dslk->next;       
   }
   getch();
}
