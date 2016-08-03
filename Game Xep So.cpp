#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int s[9]={1,2,3,4,5,6,7,8,0};
int x = 2, y = 2;

void inOSo(){
    system("cls");
    for(int i = 0;i<=8;i++){
        int v = s[i];
        if (v)
            printf("%d ",v);
        else
            printf("  ");
        if ((i+1)%3 == 0)
            printf("\n");
    }
}

bool kiemTraKetThuc(){
    for(int i = 0;i<8;i++)
        if (s[i]!=i+1)
            return 0;
    return 1;
}

int layChiSoOTrong(){
    return x*3+y;
}

void HoanVi(int i){
    int o = layChiSoOTrong();
    int t = s[o];
    s[o]=s[o+i];
    s[o+i]=t;
}

void Len(){
    if (x>0){
        HoanVi(-3);
        x--;
    }
}


void Xuong(){
    if (x<2){
        HoanVi(3);
        x++;
    }
}

void Trai(){
    if(y>0){
        HoanVi(-1);
        y--;
    }
}


void Phai(){
    if(y<2){
        HoanVi(1);
        y++;
    }
}
void KhoiTao(){
    srand((unsigned int)time(0));
    for(int i = 0;i<=200;i++){
        int r = rand()%4;
        if (r==0) Len();
        if (r==1) Xuong();
        if (r==2) Trai();
        if (r==3) Phai();
    }
}

void DiChuyen(int i){
    if (i == 75) Phai(); //75 mui ten trai, 77 mui ten phai
    if (i == 77) Trai();
    if (i == 72) Xuong();
    if (i == 80) Len();

}

int main(){
    while(1){
        KhoiTao();
        inOSo();
        while(1){
              if (kiemTraKetThuc()){
                printf("\n\tChuc mung ban da thang\n");
                break; 
            }
            int i = getch();
            DiChuyen(i);
            inOSo();
        };
        int c;
        printf("Nhan phim 'c' de tiep tuc....");
        c = getch();
        if (!(c=='C' || c=='c'))
            break;
    }
    return 0;
}

