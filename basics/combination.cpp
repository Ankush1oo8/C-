#include<iostream>
using namespace std;
int fact(int x)
{
    int f=1;
    for(int i=1; i<=x;i++) f*=i ;
    return f;

}
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int r;
    cout<<"enter r"<<endl;
    cin>>r;
    int a =fact(n);
   // for(int i=1; i<=n;i++) a*=i ;
    int b =fact(r);
    //for(int i=1; i<=r;i++) b*=i;
     int c =fact(n-r);
   // for(int i=1; i<=n-r;i++) c*=i;
    cout<<a/(b*c);
}