#include<iostream>
using namespace std;
int main()
{
    int x[5];//declaration
    cout<<"Enter array elements : "<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>x[i];
    }
    for(int i=0; i<5; i++)
    {
        cout<<x[i]<<" ";
    }

}