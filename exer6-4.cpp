
#include <iostream>
using namespace std;
int main()
{
	int i,a[20]={1,1,0};
	for(i=2;i<=19;i++)
		a[i]=a[i-1]+a[i-2];
	cout<<"Fibonacci前二十项为: "<<endl;
	for(i=0;i<=19;i++)
		cout<<a[i]<<" ";
	    cout<<endl;
}
