#include<iostream>
using namespace std;
int main()
{ 
    int i;
    for(i=1;i<=99;i++)
	{
	  if(i*i%10==i)
	    cout<<i<<" "<<i*i<<endl;
    }
} 

