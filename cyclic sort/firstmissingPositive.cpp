#include<bits/stdc++.h>
using namespace std;
int firstmising(vector<int>& nums){
    int n=nums.size();
    int i=0;
    while(i<n){
       
        if(nums[i]<=0) i++;
       
        else if(nums[i]>n || nums[i]==i+1 || nums[nums[i]-1]==nums[i]) i++;
        else {swap(nums[i],nums[nums[i]-1]);}
    
    }
    for(int i=0;i<n;i++){
        if(nums[i]!=i+1) return i+1;
    }
    return n+1;
}
int main(){
int arr[]={7,3,3,4,5,6,1,8};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int> nums(arr,arr+n);
for(int i=0;i<n;i++){
    cout<<nums[i]<<" ";
}
cout<<endl;
cout<<firstmising(nums);

}