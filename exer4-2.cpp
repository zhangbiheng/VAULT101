#include<iostream>
using namespace std;
int main()
{
	int y,i;
	cout<<"please input year:"<<endl;
	cin>>y;
	i=0;
	while(y<=3000)
	{
		if(y%400==0||(y%4==0&&y%100!=0))
		{
			cout<<y<<' '<<endl;
			i++;
		}
	if(i%10==0)
	cout<<endl;
	y++;
	}
	
}
