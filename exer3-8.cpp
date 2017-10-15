#include<iostream>
using namespace std;
int main()
{
	int a,b,x;
	cout<<"please input a,b:";
	cin>>a>>b;
	if(a%b==0)
	cout<<"a%b="<<a%b<<endl;
	else
	x=a-b*(a/b);
	cout<<"a%b="<<a%b<<' '<<"x="<<x<<endl;
}
