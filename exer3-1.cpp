#include<iostream>
using namespace std;
int main(void)
{
	int x;
	cout<<"������һ������x:"<<endl;
	cin>>x;
	if(x<10)
	cout<<x<<":С��10.\n";
	else
	if(10<=x<99)
	cout<<x<<":���ڵ���10С��99.\n";
	else
	if(100<=x<999)
	cout<<x<<":���ڵ���100С��999.\n";
	else
	if(1000<=x)
	cout<<x<<":���ڵ���1000.\n" ;
}
