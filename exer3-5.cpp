#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,q,s;
	cout<<"����������������a,b,c:";
	cin>>a>>b>>c;
	q=(a+b+c)/2;
	cout<<"s="<<sqrt(q*(q-a)*(q-b)*(q-c))<<endl;
}

