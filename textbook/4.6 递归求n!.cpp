#include<iostream>
using namespace std;
long fac(int);	//�������� 
int main()
{
	int n;	//nΪ��Ҫ��߽׳˵����� 
	long y;
	cout<<"please input an integer:";
	cin>>n;
	y=fac(n);
	cout<<n<<"!="<<y<<endl;
	return 0;
 } 
long fac(int n)	//�ݹ麯�� 
	{
		long f;
		if(n<0)
		{
			cout<<"n<0,data error!"<<endl;	//������븺����������-1��Ϊ����ֵ 
			f=-1;
		}
		else if (n==0|n==1)
		f=1;	//0!��1����ֵΪ1 
		else f=fac(n-1)*n;	//n>1ʱ�����еݹ���� 
		return f;	//��f��ֵ��Ϊ����ֵ������ 
	}
