#include<iostream>
using namespace std;
int sum(int a, int b)// a and b are two parameters
{
    return a+b;
}
int main()
{
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    int b;
    cout<<"Enter a number"<<endl;
    cin>>b;
    cout<<sum(a,b);

}