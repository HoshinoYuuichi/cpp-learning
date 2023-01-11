#include <iostream>
using namespace std;
int fib(int x)
{
	if(x==1||x==2) 
    return 1;
	  else return fib(x-1)+fib(x-2);
} 

int main()
{
	int a;
	cin>>a;
	
	cout<<"Please enter the item of Fibonacci sequence required:"<<endl<<"The value of the "<<a<<" item of the sequence is: "<<fib(a);
}
