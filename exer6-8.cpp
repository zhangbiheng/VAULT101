#include <iostream>
using namespace std;
int main()
{
	int i,k=0;
	char str1[20],str2[20],str3[40];
	cout<<"������Ҫ�����ĵ�һ���ַ���"<<endl;
	cin>>str1;
	cout<<"������Ҫ�����ĵڶ����ַ���"<<endl;
	cin>>str2;
	for(i=0;str1[i]!='\0';i++)
	{
		str3[k]=str1[i];k++;
	}
	str3[k]=' ';
	k++;
	for(i=0;str2[i]!='\0';i++)
	{
		str3[k]=str2[i];k++;
	}
	str3[k]='\0';
	cout<<"��������ַ���Ϊ��"<<str3<<endl;
}
