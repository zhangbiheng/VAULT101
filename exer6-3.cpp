#include <iostream>
#include <stdio.h>
#define N 4
using namespace std;
int fun(int a[4][4],int s);
int main()
{
	int i,j,s;
	int a[N][N];
	cout<<"输入一个4*4的整形矩阵："<<endl;
	for(i=0;i<4;i++)
	{
		cout<<"输入第"<<i+1<<"行："<<endl;
		for(j=0;j<4;j++)
			cin>>a[i][j];
	}
	s=fun(a,s);
	cout<<"主对角线元素之和为："<<s<<endl;
	cout<<"主对角线外上三角形数值加1，下三角形减1之后的整形矩阵为："<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
int fun(int a[4][4],int s)
{
	int i,j,k;
	s=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==j||i==3-j)
				s=s+a[i][j];
			if(i<=1&&j>i&&j<3-i)
				a[i][j]=a[i][j]+1;
			if(i>=2&&j<i&&j>3-i)
				a[i][j]=a[i][j]-1;
		}
	}
	return s;
}
