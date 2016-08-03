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
           
           string s;
           getline(cin,s);
           if(s=="\0") break;
           
           tam=new nhanvien;
           tam->ten = s;
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
  // if(dslk!=NULL)
   {
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
//   }
  // tam1=dslk;
     nhanvien *tam3=dslk;
     dslk=tam3;
//  if(dslk!=NULL)
 // {
  
  do
  {
  	if(tam3->tuoi<18)
   	 {
  		nhanvien *tam4;
  		tam4=new nhanvien;
  		tam4->ten="bo";
  		tam4->tuoi=30;
  		tam4->next=NULL;
  		tam4->next=tam3->next;
  		tam3->next=tam4;
  		tam3=tam4->next;
  	 }
  	else
  	tam3=tam3->next;
  }
  while(tam3!=NULL);
//  }
   while(dslk!=NULL)
   {
        cout<<dslk->ten;
        dslk=dslk->next;       
   }
   getch();
}
}

