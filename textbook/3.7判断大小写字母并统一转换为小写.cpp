#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	ch=(ch>='A'&&ch<='Z')?(ch+32):ch; //�ж�ch�Ƿ�Ϊ��д��ĸ������ת�� 
	cout<<ch<<endl;
	return 0; 
 } 
 //��Ŀ����� 
