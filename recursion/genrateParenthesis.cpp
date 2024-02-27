#include<bits/stdc++.h>
using namespace std;
void genPar(string s, int open, int close,int n){
    if(close==n){
        cout<<s<<endl;
        return;
    }
    if(open<n) genPar(s+'(',open+1,close,n);
    if(close<open)genPar(s+')',open,close+1,n);
}
int main(){
    int n=3;
    genPar("",0,0,n);
}