 #include<iostream>
 using namespace std;
 int main()
 {
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    bool flag=true;//true means prime number
    for(int i=2; i<=n/2;i++)
    {
        if(n%i==0)
        flag=false;//false means composite
        break;//to get out ofthe loop
    }
    if(n==1) cout<<"Neither Prime Nor Composite";
    else if(flag==true) cout<<"The Number is Prime";
    else cout<<"The Number is Composite";
 }