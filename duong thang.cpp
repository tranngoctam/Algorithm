#include <iostream>
using namespace std;
#include <graphics.h>
#define Round(a)(int )(a+0.5)
#define DELAY 10
int color = RED;
void  DDA_line(int x1,int y1,int x2,int y2)
{
	int x,dx,dy;
	float y;
	x=1;  y=y1;             
	dx=x2-x1;     
	dy=y2-y1;
	float m=(float)dy/dx;
	putpixel(x,Round(y),color);
	while(x<x2)
	{
	//	DELAY(10); 
		x++;      
		y+=m;
		putpixel(x,Round(y),color);
	}
	
}
int main()
{
	int gd,gm=0; 
	gd=DETECT;
	initgraph(&gd,&gm,"C://TC//BGI");
	setbkcolor(GREEN); 
    int xA,xB,yB,yA;
    cout<<"nhap diem A\n ";    cout<<"xA= ";cin>>xA; //50
    cout<<"yA= ";cin>>yA; //100
    cout<<"nhap diem B \n";    cout<<"xB= ";cin>>xB; //130 
	                           cout<<"yB= ";cin>>yB; //200
	 DDA_line (xA,yA, xB, yB);
	 getch();   closegraph();
}
	
	
