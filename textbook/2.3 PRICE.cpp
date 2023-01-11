#include <iostream>
using namespace std;
#define PRICE 30 //不是语句，不加分号！ 
int main()
{
	int num,total;
	num=10;
	total=num*PRICE; //上面PRICE为符号常量，代表30 （单价） 
	cout<<"total="<<total<<endl;
	return 0; 
 } 
