#include<bits/stdc++.h>
using namespace std;
void rmChar(string ans,string org,int idx){
    if(idx == org.size()){
        cout<<ans;
        return;
    }
    char ch = org[idx];
    if(ch=='u') rmChar(ans,org,idx+1);
    else rmChar(ans+ch,org,idx+1); 
    
}
int main(){
    string s="Ankush Chudiwal";
    string n="";
    for(int i=0;i<s.size();i++){
        if(s[i]!='u') n+=s[i];//s.pushback(s[i])
    }
    cout<<n<<endl;
    rmChar("",s,0);
}