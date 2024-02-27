//function calling itself
#include<iostream>
using namespace std;
//infinite loop or repeatation
//print n to 1
 void print(int n)
 {
    if(n==0) return;
    cout<<n<<endl;
    print(n-1);
 }
int main()
{
    int n;
    cout<<"Enter the nth term :";
    cin>>n;
    print(n);
}