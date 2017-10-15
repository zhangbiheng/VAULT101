#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int r,s,c,k;
	float pi;
	cout<<"please input r and k:";
	cin>>r>>k;
	pi=3.14159;
	switch(k)
	{
		case 1:cout<<"s="<<pi*r*r<<endl;break;
	    case 2:cout<<"c="<<2*pi*r<<endl;break;
		case 3:cout<<"s="<<pi*r*r<<' '<<"c="<<2*pi*r<<endl;break;
		default:
			cout<<"ERROR";
	}
}
