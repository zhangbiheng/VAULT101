#include<iostream>
using namespace std;
int main()
{
	int x,flag;
	cout<<"输入一个整数x:";
	cin>>x;
	if(x%3==0)
    flag=1;
	else
	if(x%7==0)
	cout<<"YES";
	else
	cout<<"NO";
}
