#include<iostream>
#include<iomanip> 
using namespace std;
float fun(double h);
int main()
{
	double h;
	cin>>h;
	float fun(double h);
	cout<<"h="<<fun(h);
	return 0;
}
float fun(double h)
{
	int y;
	float x;
	y=(h*1000+5)/10;
	x=(float)y/100;
	return(x);
}
