#include<iostream>
#define N 10
using namespace std;
int main()
{
	int a[N],*p,*q,t=0;
	for(int i=0;i<N;i++)
	    cin>>a[i];
	p=q=a;
    for(int i=1;i<N;i++)
		q++;
	for(;p<q;)
	{
        t=*p;
	    *p=*q;
	    *q=t;
	    q--;
	    p++;
	}
	for(int i=0;i<N;i++)
	    cout<<a[i]<<' ';
	
}
