#include<iostream>
using namespace std;
int main()
{
	int x,i=0;
	cout<<"������һ������";
	cin>>x;
	while(x!=0)
	{
		x/=10;
		i++;
		
	}
	switch(i)
	{
		case 0:
	    case 1:cout<<"С��10\n";break;
		case 2:cout<<"10~99\n";break;
		case 3:cout<<"100~999\n";break;	
	    default:cout<<"����1000\n";
		}
	    
}
