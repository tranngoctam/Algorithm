#include<iostream>
using namespace std;
#include<conio.h>


    void hangngan(int a)
    {
              switch(a)
			  {
                        
                                    case 1: cout<< " onethousand ";break;
                                    case 2: cout<< " twothousand";break;
                                    case 3: cout<< " threethousand ";break;
                                    case 4: cout<< " fourthousand ";break;
                                    case 5: cout<< " fivethousand"; break;
                                    case 6:cout<<" sixthousand "; break;
                                    case 7: cout<<" seventhousand " ; break;
                                    case 8: cout<<" eightthousand " ; break;
                                    case 9 : cout<<" ninethousand "; break;
              }
    }
    void hangtram(int b)
	{
              switch(b)
			  {
                        
                                    case 1: cout<< " onehundred ";break;
                                    case 2: cout<< " twohundred ";break;
                                    case 3: cout<< " threehundred ";break;
                                    case 4: cout<< " fourhundred ";break;
                                    case 5: cout<< " fivehundred"; break;
                                    case 6:cout<<" sixhundred "; break;
                                    case 7: cout<<" sevenhundred " ; break;
                                    case 8: cout<<" eighthundred " ; break;
                                    case 9 : cout<<" ninehundred "; break;
              }
    }
    void hangchuc(int c)
	{
              switch(c)
			  {
                                       case 1: cout<<"ten";break;
                                       case 2: cout<<" twenty "; break;
                                       case 3: cout<< " thirty "; break;
                                       case 4: cout<< " forty "; break;
                                       case 5: cout<< " fifty "; break;
                                       case 6: cout<<" sixty "; break;
                                       case 7: cout<<" seventy "; break;
                                       case 8: cout<<" eighty "; break;
                                       case 9: cout<< " ninety"; break;
              }
    }
    void hangdonvi(int d)
	{
               switch(d)
			   {
                                     case 1:cout<< " one"; break;
                                     case 2:cout<< " two";break;
                                     case 3:cout<< " three ";break;
                                     case 4:cout<< " four";break;
                                     case 5:cout<<" five";break;
                                     case 6:cout<< " six "; break;
                                     case 7:cout<< " seven";break;
                                     case 8:cout<< " eight"; break;
                                     case 9:cout<<" nine"; break;
               }
    }
            
int main()
{
           int a,b,c,d,n;
           cout<<"nhap so ";
           cin>>n;
         /* int k=n,dem=0;
           	while(k>0)
	        {  
	        	k=k/10;
	        	dem=dem+1;
         	}  
         	int s=pow(10,dem-1);*/
         	a=n/1000;
         	d=n%10;
         	c=((n-d)/10)%10;
         	b=((((n-d)/10)-c)/10)%10;
         cout<<a<<b<<c<<d;cout<<"\n";
         if(c==1)
         { 
		    if(d==1)
                   
         	cout<<"doc la eleven";
		    
			if(d==2)
			 cout<<"doc la twelve";
			if(d==3)
			cout<<"thirteen";
			if(d!=1&&d!=2&&d!=3)
			{
			hangdonvi(d);cout<<"teen";}
			
         }
         else
         {
         
        	cout<<"doc la ";
         	                     hangngan(a);
                                 hangtram(b);
                                 hangchuc(c);
                                 hangdonvi(d);
                                 cout<<endl;
         }
}
