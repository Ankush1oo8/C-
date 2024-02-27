#include<iostream>
using namespace std;
int main()
{
   //rectangle banana hai
   int m;
   cout<<"Enter number of rows :";
   cin>>m;
   int n;
   cout<<"Enter number of colums :";
   cin>>n;
   for(int i=1; i<=m; i++)
   {for (int j=1;j<=n;j++)//nested loops
   {
    cout<<"*";
   }cout<<endl;
   } 
}