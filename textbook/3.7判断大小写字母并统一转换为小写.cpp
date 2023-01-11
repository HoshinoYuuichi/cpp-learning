#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	ch=(ch>='A'&&ch<='Z')?(ch+32):ch; //判断ch是否为大写字母，是则转换 
	cout<<ch<<endl;
	return 0; 
 } 
 //三目运算符 
