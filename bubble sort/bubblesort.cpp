#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={44,55,27,4,2};
int n=5;
 for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    for (int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}