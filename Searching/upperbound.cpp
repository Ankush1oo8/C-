#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={1,5,8,10,15,30,40,50,69,98};
    int n=10;
    int x=31;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            flag=true;
            cout<<arr[mid+1]<<endl;
            break;
        }
        else if(arr[mid]<x )lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<arr[lo];
}