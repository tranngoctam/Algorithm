#include<iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	int i,j,k;
	ifstream fin ("number.txt");
	int dem=0;
    dem=dem+3;
	fin.close();
	cout<<dem;
}


