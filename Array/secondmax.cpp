#include<iostream>
using namespace std;
int main()
{
    int arr[]= {1,2,3,4,5,6,9,6,77,108};
    int n=sizeof(arr)/4;
    int mx = arr[0];
    for(int i=0;i<n; i++)
    {
        if(arr[i]>mx) mx = arr[i];
    }
    int smx = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=mx) smx = max(smx,arr[i]);
    

    }cout<<mx<<" "<<smx;
}