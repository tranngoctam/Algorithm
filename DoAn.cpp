/*Quan Li DSSV
DSMH : DSTT ( MA MH , Ten MH , STCLt ,STCTH )
DSSV : DSLK (MA SV, Ho, Ten, Phai )
DS lop : DSTT (Ma Lop, Ten Lop, Con Tro)
con tro tro toi DSSV thuoc lop do
DS Diem : DSLK ( Ma SV , MA MH, Loai, Diem)
CT Co Chuc nang : Nhap Lop, Nhap SV cua Lop, Nhap diem mon hoc 1 lop
In DSSV 1 lop theo thu tu alphabe cua ten ho. In Bang Diem mon hoc 1 lop. In diem TB ket thuc khoa hoc cua 1 lop theo tin chi. 
*/
#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;
const int L=3,M=3;
struct monhoc
{
	char mamh[10];
	char tenmonhoc[10];
	int STCLT,STCTH;
};
struct dsmh
{
	int n;
	monhoc Monhoc[M];
};
struct diem
{
	char masv[10];
	char mamh[10];
	int lanthi;
	float diemthi;
};
typedef struct dsdiem
{
	diem DIEM;
	dsdiem *next;
}*PTR1;
PTR1 First1=NULL;
struct sinhvien
{
	char masv[10];
	char ho[20],ten[10],phai[10];
	float diemtb;
	int tongtinchi;
};
typedef struct dssv
{
	sinhvien SV;
	dssv *next;
}*PTR;
struct LOP
{
	int malop;
	char tenlop[10];
	PTR sv;
	
};
struct dslop
{
	int n;
	LOP lop[M];
};
void nhapsinhvien(sinhvien &x)
{
	
	cout<<"nhap ma sv ";
	fflush(stdin);
	cin.getline(x.masv,10);
	cout<<"nhap ten sv ";
	fflush(stdin);
	cin.getline(x.ten,10);
	cout<<"nhap ho sv ";
	fflush(stdin);
	cin.getline(x.ho,20);
	cout<<"nhap phai ";
	fflush(stdin);
	cin.getline(x.phai,10);
}
PTR nhapdssv(PTR &First)
{
	PTR tam;
	for(int i=1;;i++)
	{
		int k;
		cin>>k;
		if(k==0)break;
		PTR p;
		p=new dssv;
		p->next=NULL;
		nhapsinhvien(p->SV);
		if(First==NULL)
		{
			First=p;
			tam=p;
		}
		else
		{
			tam->next=p;
			tam=p;
		}
			
		
	}
	return First;
}
void nhaplop(LOP lop[])
{
	
	for(int i=1;i<=M;i++)
	{
		PTR First=NULL;
		cout<<"lop "<<i<<"\n";
		cout<<"nhap ma lop ";
		cin>>lop[i].malop;
		cout<<"nhap ten lop ";
		fflush(stdin);
		cin.getline(lop[i].tenlop,10);
		cout<<"nhap dssv cua lop "<<i<<"\n";
		lop[i].sv=nhapdssv(First);
	}
}
void Xuatdssv1lop(LOP lop[])
{
	cout<<" thu tu la MaSV-Ho-Ten-Phai "<<"\n";
	for( int i=1;i<=3;i++)
	{
		PTR s=lop[i].sv;
		cout<<"Lop "<<i<<"\n";
		while(s!=NULL)
		{
		
		   cout<<s->SV.masv<<" "<<s->SV.ho<<" "<<s->SV.ten<<" "<<s->SV.phai<<"\n";
		   s=s->next;
	    }
	}
}
void nhapcacmonhoc(monhoc Monhoc[])
{
	cout<<" Nhap Cac Mon Hoc "<<"\n" ;
    for(int i=1;i<=M;i++)
    {
    	cout<<" Mon Hoc "<<i<<"\n";
	    cout<<" ma mon hoc "<<i<<" ";
	    fflush(stdin);
	    cin.getline(Monhoc[i].mamh,10);
	    cout<<" ten mon hoc "<<" ";
	    fflush(stdin);
	    cin.getline(Monhoc[i].tenmonhoc,10);
	    cout<<" So TCLT va TCTT ";
	    cin>>Monhoc[i].STCLT>>Monhoc[i].STCTH;
    }
}
void xuatcacmonhoc(monhoc Monhoc[])
{
	for(int i=1;i<=M;i++)
	{
		cout<<Monhoc[i].mamh<<" "<<Monhoc[i].tenmonhoc<<" TCLT "<<Monhoc[i].STCLT<<" "<<"TCTH "<<Monhoc[i].STCTH<<"\n";
	}
}void nhapthongtindiem(diem &y)
{
	
	cout<<"nhap ma sv ";
	fflush(stdin);
	cin.getline(y.masv,10);
	cout<<"nhap ma mon hoc ";
	fflush(stdin);
	cin.getline(y.mamh,10);
	cout<<"nhap lan thi ";
	cin>>y.lanthi;
	cout<<"nhap diem thi ";
	cin>>y.diemthi;
}
void nhapdiem(PTR1 &First1)
{
    PTR1 tam1;
	for(int i=1;;i++)
	{
		int k1;
		cin>>k1;
		if(k1==0)break;
		PTR1 p1;
		p1=new dsdiem;
		p1->next=NULL;
		nhapthongtindiem(p1->DIEM);
		if(First1==NULL)
		{
			First1=p1;
			tam1=p1;
		}
		else
		{
			tam1->next=p1;
			tam1=p1;
		}
			
		
	}
	
}
void xuatdsdiem(PTR1 First1)
{
	PTR1 tam2=First1;
	cout<<" thu tu lan luot la masv,mamh,lanthi,diem;"<<"\n";
	while(First1!=NULL)
	{
	//	cout<<tam2->DIEM.masv<<" "<<tam2->DIEM.mamh<<tam2->DIEM.lanthi<<" "<<tam2->DIEM.diemthi<<"\n;
	//	tam2=tam2->next;
	cout<<First1->DIEM.masv<<" "<<First1->DIEM.mamh<<" "<<First1->DIEM.lanthi<<" "<<First1->DIEM.diemthi<<"\n";
	First1=First1->next;
	}
}
void diemtbtheotinchi(PTR1 First1,LOP lop[],monhoc Monhoc[])
{
	
	for(int i=1;i<=L;i++)
	{
		PTR k=lop[i].sv;
		while(k!=NULL)
		{
			k->SV.diemtb=0;
			k->SV.tongtinchi=0;
			k=k->next;
			
			
		}
		
		
	}
	for(int i=1;i<=L;i++)
	{
		cout<<" Lop  "<<i<<"\n";
		for(int j=1;j<=M;j++)
		{
			PTR1 tam1=First1;
			while(tam1!=NULL)
			{
				if(strcmp(tam1->DIEM.mamh,Monhoc[j].mamh)==0)
				{
					
					PTR tam2=lop[i].sv;
					while(tam2!=NULL)
					{
						if(strcmp(tam2->SV.masv,tam1->DIEM.masv)==0)
						{
					        tam2->SV.diemtb=tam2->SV.diemtb+(tam1->DIEM.diemthi*(Monhoc[j].STCLT+Monhoc[j].STCTH));
					        tam2->SV.tongtinchi= tam2->SV.tongtinchi+Monhoc[j].STCLT+Monhoc[j].STCTH;
						}
						tam2=tam2->next;
					}
					
				}
				tam1=tam1->next;
				
			}
			
		}
		PTR tam3=lop[i].sv;
		while(tam3!=NULL)
		{
			cout<<"    MA SV: "<<tam3->SV.masv<<" Diemtb: "<<tam3->SV.diemtb/tam3->SV.tongtinchi<<"\n";
			tam3=tam3->next;
		}
	}
}	

void bangdiemmonhoc1lop(PTR1 First1,LOP lop[],monhoc Monhoc[])
{
	for(int i =1;i<=M;i++)
	{
		cout<<" Mon Hoc "<<i<<" Ma Mon Hoc "<<Monhoc[i].mamh<<"\n";
	}
	for(int i=1;i<=L;i++)
	{
		cout<<" Lop "<<i<<"\n";
		for(int j=1;j<=M;j++)
		{
			cout<<" Mon Hoc "<<j<<"\n";
			PTR1 tam4=First1;
			while(tam4!=NULL)
			{
				if(strcmp(tam4->DIEM.mamh,Monhoc[j].mamh)==0)
				{
					
					PTR tam5=lop[i].sv;
					while(tam5!=NULL)
					{
						if(strcmp(tam5->SV.masv,tam4->DIEM.masv)==0)
						{
							cout<<"     Ma SV :"<<tam5->SV.masv<<"\n"<<"     Ten SV :"<<tam5->SV.ten<<"\n"<<"     Diem :"<<tam4->DIEM.diemthi<<"\n"<<"\n";
						}
						tam5=tam5->next;
					}
					
				}
				tam4=tam4->next;
				
			}
		}
	}
}
void sapxepdssv(LOP lop[])
{
	for(int i=1;i<=3;i++)
	{
		PTR tam6=lop[i].sv;
		while(tam6!=NULL)
		{
			char str1[20];
			strcpy(str1,tam6->SV.ten);
			strcat(str1," ");
			strcat(str1,tam6->SV.ho);
			PTR min=tam6;
			PTR tam7=tam6->next;
			while(tam7!=NULL)
			{
				char str2[20];
				strcpy(str2,tam7->SV.ten);
				strcat(str2," ");
				strcat(str2,tam7->SV.ho);
				if(strcmp(str1,str2)==1)
				{
					min=tam7;
					strcpy(str1,str2);
				}
				
				tam7=tam7->next;
				
			}
			char k[10];
			strcpy(k,tam6->SV.ten);
			strcpy(tam6->SV.ten,min->SV.ten);
			strcpy(min->SV.ten,k);
				
			strcpy(k,tam6->SV.ho);
			strcpy(tam6->SV.ho,min->SV.ho);
			strcpy(min->SV.ho,k);
				
			strcpy(k,tam6->SV.phai);
			strcpy(tam6->SV.phai,min->SV.phai);
			strcpy(min->SV.phai,k);
			
			strcpy(k,tam6->SV.masv);
			strcpy(tam6->SV.masv,min->SV.masv);
			strcpy(min->SV.masv,k);
			tam6=tam6->next;

		}
	}
}

void ghifile(PTR1 First1 ,LOP lop[],monhoc Monhoc[])
{
	ofstream fout("ngoctam2.txt");
	fout<<" DSSV "<<"\n";
	fout<<" thu tu la MaSV-Ho-Ten-Phai "<<"\n";
	for( int i=1;i<=3;i++)
	{
		PTR s=lop[i].sv;
		fout<<"Lop "<<i<<"\n";
		while(s!=NULL)
		{
		
		   fout<<s->SV.masv<<" "<<s->SV.ho<<" "<<s->SV.ten<<" "<<s->SV.phai<<"\n";
		   s=s->next;
	    }
	}
	fout<<" Bang DIEM MON HOC "<<"\n";
	
	for(int i =1;i<=M;i++)
	{
		fout<<" Mon Hoc "<<i<<" Ma Mon Hoc "<<Monhoc[i].mamh<<"\n";
	}
	for(int i=1;i<=L;i++)
	{
		fout<<" Lop "<<i<<"\n";
		for(int j=1;j<=M;j++)
		{
			fout<<" Mon Hoc  "<<j<<"\n";
			PTR1 tam4=First1;
			while(tam4!=NULL)
			{
				if(strcmp(tam4->DIEM.mamh,Monhoc[j].mamh)==0)
				{
					
					PTR tam5=lop[i].sv;
					while(tam5!=NULL)
					{
						if(strcmp(tam5->SV.masv,tam4->DIEM.masv)==0)
						{
							fout<<"     Ma SV :"<<tam5->SV.masv<<"\n"<<"     Ten SV :"<<tam5->SV.ten<<"\n"<<     "  Diem :"<<tam4->DIEM.diemthi<<"\n"<<"\n";
						}
						tam5=tam5->next;
					}
					
				}
				tam4=tam4->next;
				
			}
		}
	}
	fout<<" Bang Diem Mon Hoc Theo Tin Chi "<<"\n";

	for(int i=1;i<=L;i++)
	{
		fout<<" Lop  "<<i<<"\n";
		
		PTR tam2=lop[i].sv;
		while(tam2!=NULL)
		{
			fout<<"    MA SV: "<<tam2->SV.masv<<" Diemtb: "<<tam2->SV.diemtb/tam2->SV.tongtinchi<<"\n";
		    tam2=tam2->next;
	    }
    }
	
}
int main()
{
	int a;
	char tl;
	LOP lop[L];
	monhoc Monhoc[M];
	nhaplop(lop);
	nhapcacmonhoc(Monhoc);
	xuatcacmonhoc(Monhoc);
	cout<<" Nhap DS Diem : Nhan So Bat Ki De Tiep Tuc, 0 de ket thuc"<<"\n";
	nhapdiem(First1);
	sapxepdssv(lop);
//	xuatdsdiem(First1);
    do
    {
    	cout<<" 1: in DSSV 1 lop theo thu tu alphanbe"<<"\n";
        cout<<" 2: in bang diem mon hoc 1 lop"<<"\n";
        cout<<" 3: in diem trung binh ket thuc khoa hoc theo tin chi"<<"\n";
        cin>>a;
        switch(a)
        {
        	case 1:Xuatdssv1lop(lop);break;
        	case 2:bangdiemmonhoc1lop(First1,lop,Monhoc);break;
        	case 3:diemtbtheotinchi(First1,lop,Monhoc);break;
        }
        cout<<"Tiep Khong(c/k)?";
        cin>>tl;
    }while(tl=='c');
    
    ghifile(First1,lop,Monhoc);
}


