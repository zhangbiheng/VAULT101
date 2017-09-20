#include<iostream>
using namespace std;
int main(void)
{
	int x;
	cout<<"请输入一个整数x:"<<endl;
	cin>>x;
	if(x<10)
	cout<<x<<":小于10.\n";
	else
	if(10<=x<99)
	cout<<x<<":大于等于10小于99.\n";
	else
	if(100<=x<999)
	cout<<x<<":大于等于100小于999.\n";
	else
	if(1000<=x)
	cout<<x<<":大于等于1000.\n" ;
}
