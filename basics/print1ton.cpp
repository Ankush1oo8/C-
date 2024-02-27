//function calling itself
#include<iostream>
using namespace std;
//infinite loop or repeatation
//print 1 to n
 void print(int x, int n)
 {
    if(x>n) return;
    cout<<x<<endl;
    print(x+1,n);
 }
int main()
{
    int n;
    cout<<"Enter the nth term :";
    cin>>n;
    print(1,n);
}