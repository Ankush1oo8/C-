#include<iostream>
using namespace std;
int power(int a, int b)
{
    if(a==1 or b==0) return 1;
    return a*power(a,(b-1));
}
int main()
{
    int a,b;
    cout<<"Enter base : "<<endl;
    cin>>a;
    cout<<"Enter power : "<<endl;
    cin>>b;
    cout<<a<<" raised to the power "<<b<<" is : "<<power(a,b);
}