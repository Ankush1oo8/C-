#include<bits/stdc++.h>
using namespace std;
int main(){
 int arr[]={5,3,4,1,7};
    int n=5;
    vector<int>v(5);
    for(int i=0;i<5;i++){
        v[i]=arr[i];
  }
    sort(v.begin(), v.end());
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    }