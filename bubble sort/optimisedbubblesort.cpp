#include <iostream>
using namespace std;
int main(){
    int arr[6]={5,6,4,3,2,1};
    int n=6;
        for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    for (int i=0;i<n-1;i++){
        bool flag=true;
        for (int j=0;j=n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true){
            //swap didnot happen
            break;
        }
    }

    cout<<endl; 
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}