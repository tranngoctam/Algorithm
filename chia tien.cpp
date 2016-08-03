#include <iostream>
using namespace std;
int main()
{
	int namtram = 0;
	int haitram = 0;
	int mottram = 0;
	int namchuc = 0;
	int haichuc = 0;
	int muoingan = 0;
	int namngan = 0;
	int haingan = 0;
	int motngan = 0 ;
	int sotien = 0;
	cout<<"nhap so tien vao ";
	cin>>sotien;
	
		if(sotien>=500)
		{
			int hs = sotien/500;
			namtram=hs;
			sotien = sotien - (hs*500);
		}
		if(sotien>=200)
		{
			int hs2 = sotien/200;
			haitram=hs2;
			sotien = sotien - (hs2*200);
		}
		if(sotien>=100)
		{
			int hs3 = sotien/100;
			mottram=hs3;
			sotien = sotien - (hs3*100);
		}
		if(sotien>=50)
		{
			int hs4 = sotien/50;
			namchuc = hs4;
			sotien = sotien - (hs4*50);
		}
		if(sotien>=20)
		{
			int hs5 = sotien/20;
			haichuc = hs5;
			sotien = sotien - (hs5*20);
		}
			if(sotien>=10)
		{
			int hs6 = sotien/10;
			muoingan = hs6;
			sotien = sotien - (hs6*10);
		}
	cout<<"500: "<<namtram<<"\n"<<"200: "<<haitram<<"\n"<<"100: "<<mottram<<"\n"<<"50: "<<namchuc<<"\n"<<"20: "<<haichuc<<"\n"<<"10: "<<muoingan<<"\
	n";
}
