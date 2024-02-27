#include<bits/stdc++.h>
using namespace std;
int pow(int a,int b){
    if(b==1)return a;
    return a*pow(a,b-1);
}
int optpow(int a,int b){
    if(b==0)return 1;
    int ans=optpow(a,b/2);
    
    if(b%2==0) {
        return ans*ans;
    }
    if(b%2!=0){
        return ans*ans*a;
    }
}
int main(){
    cout<<pow(2,3)<<endl;
    cout<<optpow(2,4)<<endl;
}