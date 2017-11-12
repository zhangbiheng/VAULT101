#include<iostream>
using namespace std;
void fun(int m)
{
	int a=0,x;	
	for(x=1;x<=m;x++)
	if(x%7==0||x%11==0)		
	{
	  cout<<x<<" ";
	  a++;
	}	
	cout<<"¹²ÓÐ"<<a<<"¸ö";
				
}
int main()
{
	int m;
    void fun(int m);
	cin>>m;
	fun(m);
}
