#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int si,int ei){
    int pe=arr[si];
    int count=0;
    for(int i=si+1;i<ei;i++){
        if(arr[i]<=pe) count++;
    }
    int pei=count+si;
    swap(arr[si],arr[pei]);
    int i=si;
    int j=ei;
    while(i<pei && j>pei){
        if(arr[i]<=pe)i++;
        if(arr[j]>pe)j--;
        else if(arr[i]>pe && arr[j]<+pe){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pei;
}

void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi=partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,si);


}
int main(){
     int arr[]={5,2,1,8,4,3,6,9};
     int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     quicksort(arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}