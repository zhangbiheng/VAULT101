#include<iostream>
#define M 10
using namespace std; 
int main()
{
	int i,j,k,t,max,min;
	int a[M];
	for(i=0;i<M;i++)
	cin>>a[i];
	max=min=a[0];
	j=k=0;
	for(i=0;i<M;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			j=i;
		}
	    else if(min>a[i])
	    {
	    	min=a[i];
			k=i;
		}
	}
	t=a[k];
	a[k]=a[j];
	a[j]=t;
	for(i=0;i<10;i++)
	{
	  cout<<a[i]<<" ";
	}
    return 0; 
 } 
