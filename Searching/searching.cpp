#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,4,6,8,12,44,55,66,43,34,22,69};
    int target,i;
    cout<<"Number you are searchiong for: "<<endl;
    cin>>target;
    bool flag=false;
    for(i=0;i<sizeof(arr);i++){
        if(arr[i]==target){
            flag =true;
            break;

        }
    }
    if(flag==true){
    cout<<"enlemnt is present in array at: "<<i<<endl;
    }
    else{
        cout<<"element not present!!"; 
    }

}