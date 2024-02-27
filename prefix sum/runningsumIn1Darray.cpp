#include<bits/stdc++.h>
using namespace std;
vector<int> runningsum(vector<int>& v){
    int n=v.size();
    vector<int> run(n);
    run[0]=v[0];
    for(int i=1;i<n;i++){
        run[i]=v[i]+run[i-1];
    }
    return run;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    runningsum(v);
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

