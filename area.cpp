#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c,s;
    double S;
    cin>>a>>b>>c;
    s=(double)(a+b+c)/2;
    S=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<S;
    return 0;
}
