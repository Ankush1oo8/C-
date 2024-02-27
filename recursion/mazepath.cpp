#include<bits/stdc++.h>
using namespace std;
int maze(int sr,int sc, int er,int ec ){
    if(sr>er || sc>ec) return 0;
    if(sr==ec && sc==ec)return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    int totalWays = rightWays+downWays;
    return totalWays;

}
void printpath(int sr,int sc, int er,int ec,string s){
    if(sr>er || sc>ec) return ;
    if(sr==ec && sc==ec){
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+'R');
    printpath(sr+1,sc,er,ec,s+'D');
    
}
int maze2(int er,int ec ){
    if(er<1 || ec<1) return 0;
    if(er==1 && ec==1)return 1;
    int rightWays = maze2(er,ec-1);
    int downWays = maze2(er-1,ec);
    int totalWays = rightWays+downWays;
    return totalWays;

}
int main(){
    // cout<<maze(0,0,5,5);
    printpath(1,1,3,3,"");
    cout<<maze2(3,3);
}