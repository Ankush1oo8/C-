#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int target, int n){
     int hi=n;
     int lo=0;
     while(lo<=hi){
        int mid = (hi+lo)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) return hi=mid-1;
        else lo = mid+1;
    }
    return -1;
}
int main(){
    int ar[]={1,2,4,6,8,12};
    int target,mid;
    int n=6;
    cout<<"enter element: "<<endl;
    cin>>target;
    cout<<endl;
   
   
     cout<<"your place is: "<< search(ar,target,n)<<endl;
}