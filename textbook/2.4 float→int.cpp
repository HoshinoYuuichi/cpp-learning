#include <iostream>
using namespace std;
int main()
{
	float x;
	int i;
	x=3.6;
	i=(int)x; //易错 
	cout<<"x="<<x<<",i="<<i<<endl;
	return 0;
	//强制将浮点型x转化为整型i 
 } 
