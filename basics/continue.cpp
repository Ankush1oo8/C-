 #include<iostream>
 using namespace std;
 int main()
 {
    for(int i=1; i<=50; i++)
    {
        if(i==2) continue;
        if(i==25) continue;
        cout<<i<<" ";
    }
 }