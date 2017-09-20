#include<iostream>
using namespace std;
int main()
{
	int x,i=0;
	cout<<"请输入一个整数";
	cin>>x;
	while(x!=0)
	{
		x/=10;
		i++;
		
	}
	switch(i)
	{
		case 0:
	    case 1:cout<<"小于10\n";break;
		case 2:cout<<"10~99\n";break;
		case 3:cout<<"100~999\n";break;	
	    default:cout<<"大于1000\n";
		}
	    
}
