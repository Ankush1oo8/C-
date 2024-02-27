#include<bits/stdc++.h>
using namespace std;

int hcf(int a, int b){//time compelxity is much more it is O(min(a,b))
    for(int i=min(a,b);i>=2;i--){
        if(a%i==0 && b%i==0)return i;
    }
    return 1;
}
int gcf(int min,int max){//time complexcity is O(log(a+b))
    if(min==0)return max;
    else return gcf(max%min,min);
}

int main(){
    int a=24;
    int b=60;
    cout<<hcf(a,b)<<endl;
    cout<<gcf(a,b);
}