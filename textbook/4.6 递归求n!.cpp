#include<iostream>
using namespace std;
long fac(int);	//函数声明 
int main()
{
	int n;	//n为需要求竭阶乘的整数 
	long y;
	cout<<"please input an integer:";
	cin>>n;
	y=fac(n);
	cout<<n<<"!="<<y<<endl;
	return 0;
 } 
long fac(int n)	//递归函数 
	{
		long f;
		if(n<0)
		{
			cout<<"n<0,data error!"<<endl;	//如果输入负数，报错并以-1作为返回值 
			f=-1;
		}
		else if (n==0|n==1)
		f=1;	//0!和1！的值为1 
		else f=fac(n-1)*n;	//n>1时，进行递归调用 
		return f;	//将f的值作为函数值调返回 
	}
