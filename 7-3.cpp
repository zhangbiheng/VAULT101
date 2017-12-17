#include<iostream>
using namespace std;
#define N 10
int main()
{
	int a[N],*p,*max,*min,t=0;
	for(int i=0;i<N;i++)
	  cin>>a[i];
	p=max=min=a;
	for(int i=0;i<N;i++)
	{
	 if(*p>*max)
	   max=p;
	 if(*p<*min)
	   min=p;
	 p++;
	}
	t=*max;
	*max=*min;
	*min=t;
	for(int i=0;i<N;i++)
	  cout<<a[i]<<" ";	
}
