#include<iostream>
using namespace std;
int main()
{
	float s;
	int n;
	float f(int n);
	cin>>n;
	s=f(n);
	cout<<"s= "<<s<<endl;
 } 
 float f(int n)
 {
 	int s=0,a=1,i;
 	for(i=2;i<=n;i++)
 	{
 		s=s+1/a;
 		a=a+i;
	 }
	 return(s);
 }
